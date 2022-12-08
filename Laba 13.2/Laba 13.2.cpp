#include <iostream> 
using namespace std;
#define SQRMIN(F1,F2) (F1<F2 ? F1*F1 : F2*F2); 
#define MAX(F1,F2) (F1>F2 ? F1 : F2); 
#define N 5; 
#define FUNC1MIN(x,y,z) (x * y +x * z); 
#define FUNC2MIN(x,z) ((z * x + z * y)*(z * x + z * y)) 
#define FUNC1MAX(x,y) ((x + y) * (x + y)) 
#define FUNC2MAX(y,z) ((x - z) * (x - z)) 
#define DO_FIRST_PART(z) ((z) <= 3) ? true : false 

#include <conio.h> 

void main()
{
	int x, y, z = N;
	int ABS, SQR = 0, ADD_XY, ADD_XZ;
	char ch;
	do 
	{
	cout << "Input 3 numbers" << endl;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
#if (DO_FIRST_PART(z)) 
		{

			ADD_XY = FUNC1MIN(x, y, z);
			ADD_XZ = FUNC2MIN(x, z);
			cout << "W = " << SQRMIN(ADD_XY, ADD_XZ);
			cout << endl;
		}
#else 
		{
			SQR = FUNC1MAX(x, y);
			ABS = FUNC2MAX(y, z);
			cout << "W = " << MAX(SQR, ABS);
			cout << endl;
		}
#endif 
		cout << ("Repeat? Pres f "); ch = _getch();
		cout << endl;
	} while (ch == 'f');
}