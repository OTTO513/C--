#include <iostream>
using namespace std;

int main(void)
{
    setlocale(LC_ALL, "Russian");
    int n, s = 3, r = 1;
    cout << "¬ведите число n: ";
    cin >> n;

    while (r * s <= n)
        r *= s;

    if (r == n)
        cout << "True";
    else
        cout << "False";

    return 0;
}