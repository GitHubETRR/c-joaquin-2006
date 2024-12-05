#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
	float celsius;
	cout << "\nIntroduzca grados celsius: ";
	cin >> celsius;
	cout << fixed << setprecision(2);
	cout << "\nGrados Farenheit: " << 32+(9*celsius/5) << endl; 
	cout << "\nGrados Kelvin: " << celsius+273 << endl;
	cout << "\nGrados Reamur: " << (80 * celsius)/100 << endl; 
}