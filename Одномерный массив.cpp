#include <iostream>
using namespace std;
#define N 10
int A[N], s, L, R;

int main()
{
    setlocale(LC_ALL, "Russian");
    for (s = 0; s < N; s++)
    {
        cout << "Введите " << s + 1 << " значение массива ";
        cin >> A[s];
    }
    cout << "\nМассив A: \n";
    for (s = 0; s < N; s++)
        cout << A[s] << ' ';

    L = 0;
    R = N - 1;
    cout << '\n';
    while (L <= R)
    {
        cout << A[L];
        if (L == R)
            break;
        cout << A[R];
        L++;
        R--;
    }
    return 0;
}