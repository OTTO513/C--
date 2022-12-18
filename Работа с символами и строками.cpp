# include <iostream>
using namespace std;
int main()
{

	int N;
	cout << "¬ведите число N от 1 до 26: ";
	cin >> N;
	for (char c = 'A'; c < 'A' + N; ++c) {
		cout << c << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}