#include <iostream>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "¬ведите A : ";
	cin >> a;
	cout << "¬ведите B : ";
	cin >> b;
	bool d = ((a > 2) && (b <= 3));
	cout << d;
}