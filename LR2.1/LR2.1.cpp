#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846

using namespace std;

int main() {

	int x;
	double z1;
	//double z2;

	cout << "x= "; cin >> x;

	z1 = cos(x) + sin(x) + cos(3 * x) + sin(3 * x);
	//z2 = (2 * sqrt(2) * cos(x)) * sin((M_PI/4) + 2 * x);

	cout << endl;
	cout << "z1= " << z1 << endl;
	//cout << "z2= " << z2 << endl;
	cin.get();
	return 0;

}
