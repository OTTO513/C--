#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int A, B, sum;
    cout << "¬ведите диапазон:" << endl;
    cout << "A = ";
    cin >> A;
    cout << "B = ";
    cin >> B;
    sum = 0;
    for (int i = A; i < B + 1; i++)
    {
        sum += i;
    }
    cout << "—умма чисел от A до B: " << sum << endl;
    system("pause");
    return 0;
}