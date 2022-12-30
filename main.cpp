#include <iostream>
#include <sstream>
using namespace std;
//variant 4



/*Во всех заданиях, помимо указанных в задании операций, обязательно должны быть реализованы следующие методы:
– ввод с клавиатуры read; ПЕРВОЕ(1)
– вывод на экран display; ВТОРОЕ(2)
– преобразование в строку toString. ТРЕТЬЕ(3)
– метод инициализации init; ЧЕТВЕРТОЕ(4)
*/



class CMoney
{
    long roubles;
    unsigned int copecks;
    float wholeSum;
    void splitUp()
    {
        roubles = (int)wholeSum;
        copecks = (int)((wholeSum - (int)wholeSum) * 100);
    }
public:

    CMoney()
    {
        read();
        if(!init()){
            cout << "Vvedite argument povtorno\n";
            read();
        }
    };
    void read(){ //вот ввод с клавиатуры read()
        cin >> wholeSum;
        splitUp();
    }
    bool init(){ //вот метод инициализации init(), специально сделал с проверкой на неправильные входящие данные
       if(wholeSum < 0){
           cout << "Invalid argument!\n";
           return 0;
       }
       else return 1;
    }
    string toString() //вот toString()
    {
        stringstream out;
        string str;
        out << roubles << ",";
        if (copecks < 10)
        {
            out << '0';
        }
        out << copecks;
        str = out.str();
        return str;
    };
    CMoney sum (CMoney arg)
    {
        CMoney temp;
        temp.wholeSum = this->wholeSum + arg.wholeSum;
        temp.splitUp();
        return temp;
    };
    CMoney raznost (CMoney arg)
    {
        CMoney temp;
        temp.wholeSum = this->wholeSum - arg.wholeSum;
        temp.splitUp();
        return temp;
    };
    float delenie (CMoney arg)
    {
        float temp;
        temp = this->wholeSum / arg.wholeSum;
        return temp;
    };
    CMoney delenie (float arg)
    {
        CMoney temp;
        temp.wholeSum = this->wholeSum / arg;
        temp.splitUp();
        return temp;
    };
    CMoney umozh (float arg)
    {
        CMoney temp;
        temp.wholeSum = this->wholeSum * arg;
        temp.splitUp();
        return temp;
    };
    bool ravno (CMoney arg)
    {
        return (this->wholeSum == arg.wholeSum);
    };
    bool neRavno (CMoney arg)
    {
        return (this->wholeSum != arg.wholeSum);
    };
    bool bolshe (CMoney arg)
    {
        return (this->wholeSum > arg.wholeSum);
    };
    bool menshe (CMoney arg)
    {
        return (this->wholeSum < arg.wholeSum);
    };
    bool bolsheravno (CMoney arg)
    {
        return (this->wholeSum >= arg.wholeSum);
    };
    bool menseravno (CMoney arg)
    {
        return (this->wholeSum <= arg.wholeSum);
    };

    void display() { //вот вывод на экран display()
        cout << this->toString() << endl;
    }
};

int main()
{
    cout << "Write first number: \n";
    CMoney a1;
    cout << "Write second number: \n";
    CMoney a2;
    char sign;
    cout << "write sign of operation(+,-,*,/,%,!=,<,>,>=,<=,==)";
    cin >> sign;
    switch (sign)
    {
    case '+':
    {
        CMoney a3;
        a3 = a1.sum(a2);
        cout << "result : " << a3.toString();
    }
    break;
    case '-':
    {
        CMoney a3;
        a3 = a1.raznost(a2);
        cout << "result : " << a3.toString();
    }
    break;
    case '*':
        {
            float param;;
            cout << "Write parametr of multiplying: ";
            cin >> param;
            CMoney a3;
            a3 = a1.umozh(param);
            cout << "result : " << a3.toString();
        }
    break;
    case '/':
    {
        float a3;
        a3 = a1.delenie(a2);
        cout << "result : " << a3;
    }
    break;
    case '%':
    {
        CMoney a3;
        float param;;
        cout << "Write parametr of delenie: ";
        cin >> param;
        a3 = a1.delenie(param);
        cout << "result : " << a3.toString();
    }
    break;
    case '>':
    {
        bool k = (a1.bolshe(a2));
        if (k) {
            cout << "True";
        }
        else {
            cout << "False";
        }
    }
    break;

    case '<':
    {
        bool k = (a1.menshe(a2));
        if (k) {
            cout << "True";
        }
        else {
            cout << "False";
        }
    }
    break;

    case '!=':
    {
        bool k = (a1.neRavno(a2));
        if (k) {
            cout << "True";
        }
        else {
            cout << "False";
        }
    }
    break;

    case '==':
    {
        bool k = (a1.ravno(a2));
        if (k) {
            cout << "True";
        }
        else {
            cout << "False";
        }
    }
    break;
    case '>=':
    {
        bool k = (a1.bolsheravno(a2));
        if (k) {
            cout << "True";
        }
        else {
            cout << "False";
        }
    }
    break;
    case '<=':
    {
        bool k = (a1.menshe(a2));
        if (k) {
            cout << "True";
        }
        else {
            cout << "False";
        }
    }
    break;

    default:
        break;
    }
}
