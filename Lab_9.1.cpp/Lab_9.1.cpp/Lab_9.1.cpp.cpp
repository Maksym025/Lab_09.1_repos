#include <iostream>
#include <math.h>
#include <iomanip>
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;
double arccot(int x);
int main()
{
	cout << "x_p = "; cin >> x_p;
	cout << "x_k = "; cin >> x_k;
	cout << "dx = "; cin >> dx;
	cout << "e = "; cin >> e;
    cout << fixed;

    cout << "--------------------------------------------" << endl;
    cout << "|" << setw(5) << "x" << "   |"
        << setw(10) << "arccot(x)" << " |"
        << setw(10) << "s" << " |"
        << setw(5) << "n" << "    |" << endl;
    cout << "--------------------------------------------" << endl;
	double PI = 3.14159265358980;
	x = x_p;
	while (x <= x_k) {
		sum(); 
        cout << "|" << setw(7) << setprecision(2) << x << " |"
            << setw(10) << setprecision(5) << (PI / 2 - atan(x)) << " |"
            << setw(10) << setprecision(5) << (PI / 2 + s) << " |"
            << setw(8) << n << " |" << endl;
		x += dx;
	}
    
    cout << "--------------------------------------------" << endl;
	cin.get();
	return 0;
}