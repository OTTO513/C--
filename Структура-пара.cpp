#include "iostream"
using namespace std;
class money
{
    int first;
    int second;
public:
    int summa()
    {
        return first * second;
    }
    void Display()
    {
        cout << first << ':' << second << endl;
    }
    void Read(int nom);
    friend class CashIn;
};

class CashIn
{
    static const int K = 9;
    int allowed[K];
    money a[K];
public:
    CashIn();
    void ReadAll();
    void DisplayAll();
    int TotalSum();
};

void money::Read(int nom)
{
    first = nom;
    cout << "������� ����������:";
    cin >> second;
}

CashIn::CashIn() 
{
    int t[K] = { 1,2,5,10,50,100,500,1000,5000 };
    for (int j = 0; j < K; j++)
        allowed[j] = t[j];
}
void CashIn::ReadAll()
{
    for (int j = 0; j < K; j++)
    {
        cout << "������� ������ " << allowed[j] << endl;
        a[j].Read(allowed[j]);
    }
}
void CashIn::DisplayAll()
{
    for (int i = 0; i < K; i++)
        a[i].Display();
}
int CashIn::TotalSum()
{
    int totalsum = 0;
    for (int i = 0; i < K; i++)
        totalsum += a[i].summa();
    return totalsum;
}


int main()
{
    setlocale(LC_ALL, "Russian");
    CashIn A;
    A.ReadAll();
    A.DisplayAll();
    cout << "�������� ����� = " << A.TotalSum() << endl;
    system("pause");
    return 0;
}