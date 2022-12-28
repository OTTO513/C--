#include <iostream>
using namespace std;
class Clock1 {};

class Clock2 {
    string msg;
public:
    Clock2 (const string & s) : msg(s) {}
    const char* message() const { return msg.c_str(); }
};

class Clock3 : public invalid_argument{
    double num;
public:
    Clock3 (const string msg, double n) : invalid_argument(msg), num(n) {}
    double arg() const { return num; }
};

int root1 (int hours, int minute) {
    int seconds;
    
                seconds = (hours * 3600) + (minute * 60);
                
                return seconds;
        }

int root2 (int hours, int minute) throw() {
    int seconds;
    
        seconds = (hours * 3600) + (minute * 60);
        
      
    
    return seconds;
}

int root3 (int hours, int minute) throw(invalid_argument) {
    int seconds;
    
        seconds = (hours * 3600) + (minute * 60);
        if (hours == 0) throw invalid_argument("no hours");
      
        else
    return seconds;
}

int root4_1 (int hours, int minute) throw(string) {
    int seconds;
    
        seconds = (hours * 3600) + (minute * 60);
   
        if (hours == 0) 
            throw (string("No hours"));
        
       
        else
    return seconds;
}

int root4_2(int hours, int minute) throw(string) {
    int seconds;
    
        seconds = (hours * 3600) + (minute * 60);
     
        if (minute == 0)
            throw(string("no minutes"));
}

int root4_3(int hours, int minute) throw(string) {
    int seconds;
    
        seconds = (hours * 3600) + (minute * 60);
      
        if (hours == 0 && minute == 0)
            throw(string("No input"));
    return seconds;
}

void launcher(int (*func)(int,int)) {
    int a, b;
    cout << "Введите hour= ";
    cin >> a;
    cout << "Введите minutes= ";
    cin >> b;
    
    cout << "Полученные секунды " << func(a, b) << endl;
}

int main() {
    setlocale(LC_ALL, "rus");
    

    try {
        launcher(root1);
    }
    catch (...) {
        cout << "Произошло исключение в функции root1" << endl;
    }
    
    try {
        launcher(root2);
    }
    catch (...) {
        cout << "Произошло исключение в функции root2" << endl;
    }

    try {
        launcher(root3);
    }
    catch (invalid_argument& e) {
        cout << e.what() << endl;
    }

    try {
        launcher(root4_1);
    }
    catch (string error) {
        cout << "Произошло исключение Clock1 в функции root4_1: "<<error << endl;
    }

    try {
        launcher(root4_2);
    }
    catch (string error) {
        cout << error << endl;
    }

    try {
        launcher(root4_3);
    }
    catch (string error) {
        cout <<error<< endl;
    }
}