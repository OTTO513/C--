#include <iostream>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "������� A : ";
	cin >> a;
	cout << "������� B : ";
	cin >> b;
	bool d = ((a > 2) && (b <= 3));
	cout << d;
}