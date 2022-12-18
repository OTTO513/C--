#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int n, x, z, y;
    cout << "Введите количество элементов: ";
    cin >> n;
    cout << "x="; cin >> x;
    cout << "y="; cin >> y;
    vector <int> vec;
    for (int i = 0; i < n; i++)
    {
        cout << "Введите элемент " << i << endl; cin >> z; vec.push_back(z);
    }

    replace_if(vec.begin(), vec.end(), [&x](int z) {return z == x; }, y);

    for (vector <int>::iterator iter = vec.begin(); iter < vec.end(); iter++)
    {
        cout << *iter << endl;
    }
    system("pause");
    return 0;
}