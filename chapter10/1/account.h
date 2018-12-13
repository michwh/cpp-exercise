#include<string>
using namespace std;
class Account
{
private:
    string name;
    string number;
    double deposit;

public:
    Account(string na, string nu, double de);
    Account();
    ~Account();
    void show();
    void store(double money);
    void draw(double money);
}