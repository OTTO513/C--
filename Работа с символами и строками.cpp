# include <iostream>
using namespace std;
int main()
{

	int N;
	cout << "������� ����� N �� 1 �� 26: ";
	cin >> N;
	for (char c = 'A'; c < 'A' + N; ++c) {
		cout << c << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}