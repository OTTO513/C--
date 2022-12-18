#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    int matrix[100][100];
    int mass[100];
    int M, N;
    cout << "¬ведите кол-во строк: ";
    cin >> M;
    cout << "¬ведите кол-во столбцов: ";
    cin >> N;
    for (int i = 0; i < M; i++) {
        int count = 0;
        if (i % M)
            cout << endl;
        for (int j = 0; j < N; j++) {
            matrix[i][j] = rand() % 100;
            cout << matrix[i][j] << " ";
        }
    }
    int min = matrix[0][0];
    for (int i = 0; i < M; i++) {
        int min = matrix[i][0];
        for (int j = 0; j < N; j++) {
            if (matrix[i][j] < min)
                min = matrix[i][j];
        }
        mass[i] = min;
    }

    cout << endl << endl;
    for (int i = 0; i < M; i++)
        cout << mass[i] << " ";
    cout << endl;
    return 0;
}