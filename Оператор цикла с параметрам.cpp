#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int A, B, sum;
    cout << "������� ��������:" << endl;
    cout << "A = ";
    cin >> A;
    cout << "B = ";
    cin >> B;
    sum = 0;
    for (int i = A; i < B + 1; i++)
    {
        sum += i;
    }
    cout << "����� ����� �� A �� B: " << sum << endl;
    system("pause");
    return 0;
}