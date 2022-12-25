#include <iostream.h>
#include <conio.h>
using namespace std;
// определение класса комплексных чисел
class Complex {
public: 
     void Init(int rl, int im = 0); // инициализировать
     void Read();           // ввод с клавиатуры
     void Display();        // вывод
     void Add(Complex x);  // прибавить комплексное число
     void Sub(Complex x);  // вычесть комплексное число
     void Mul(Complex x);  // умножить комплексное число
private:
     int real;  // вещественная часть
     int imaginary;  // мнимая часть
 
};
// определение метода ввода
void Complex::Read()
{
cout<<"Enter real : ";
cin>>real;
cout<<"Enter imaginary : ";
cin>>imaginary;
}
 
// определение метода вывода
void Complex::Display()
{
cout<<"real="<<real<<"\n";
cout<<"imaginary="<<imaginary<<"\n";
}
// определение метода инициализации
void Complex::Init(int rl, int im)
{
real=rl;
imaginary=im;
}
// определение метода сложения
void  Complex::Add(Complex x)
{
     real = real + x.real;
     imaginary = imaginary + x.imaginary;
}
// определение метода вычитания
void  Complex::Sub(Complex x)
{
     real = real - x.real;
     imaginary = imaginary - x.imaginary;
}
// определение метода умножения
void  Complex::Mul(Complex x)
{
     real = real*x.real-imaginary*x.imaginary;
     imaginary = real*x.imaginary+imaginary*x.real;
}
 
int main()
{
     Complex number;   // первый объект класса Complex
     number.Init(1,3);
     cout<<"1 number =";
     number.Display();
     Complex num2;      // второй объект класса Complex
     num2.Read();
     cout<<"2 number =";
     num2.Display();
     number.Add(num2);  // прибавить значение второго  объекта к первому
     cout<<"Add =";
     number.Display();
     number.Sub(num2);  // прибавить значение второго  объекта к первому
     cout<<"Sub =";
     number.Display();
     getch();
     return 1;
}