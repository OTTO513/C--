#include <iostream>
#include <sstream>
using namespace std;

class CMoney
{
    long roubles;
    unsigned int copecks;
    float wholeSum;
    void splitUp()
    {
        roubles = (int)wholeSum;
        copecks = (int)((wholeSum - (int)wholeSum) * 100);
    };
public:
    void get()
    {
        cin >> wholeSum;
        splitUp();
    };
    string show()
    {
        stringstream out;
        string str;
        out << roubles << ",";
        if (copecks < 10)
        {
            out << "0";
        }
        out << copecks;
        str = out.str();
        return str;
    };
    CMoney operator+ (CMoney arg)
    {
        CMoney temp;
        temp.wholeSum = this->wholeSum + arg.wholeSum;
        temp.splitUp();
        return temp;
    };
    CMoney operator- (CMoney arg)
    {
        CMoney temp;
        temp.wholeSum = this->wholeSum - arg.wholeSum;
        temp.splitUp();
        return temp;
    };
    float operator/ (CMoney arg)
    {
        float temp;
        temp = this->wholeSum / arg.wholeSum;
        return temp;
    };
    CMoney operator/ (float arg)
    {
        CMoney temp;
        temp.wholeSum = this->wholeSum / arg;
        temp.splitUp();
        return temp;
    };
    CMoney operator* (float arg)
    {
        CMoney temp;
        temp.wholeSum = this->wholeSum * arg;
        temp.splitUp();
        return temp;
    };
    bool operator== (CMoney arg)
    {
        return (this->wholeSum == arg.wholeSum);
    };
    bool operator!= (CMoney arg)
    {
        return (this->wholeSum != arg.wholeSum);
    };
    bool operator> (CMoney arg)
    {
        return (this->wholeSum > arg.wholeSum);
    };
    bool operator< (CMoney arg)
    {
        return (this->wholeSum < arg.wholeSum);
    };
    bool operator>= (CMoney arg)
    {
        return (this->wholeSum >= arg.wholeSum);
    };
    bool operator<= (CMoney arg)
    {
        return (this->wholeSum <= arg.wholeSum);
    };
};