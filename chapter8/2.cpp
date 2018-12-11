#include<iostream>
#include<cstring>

using namespace std;

struct CandyBar
{
    char * name;
    double weight;
    int calories;
};

void set(CandyBar & candy, char * name = "Millennium Munch", const double weight = 2.85, const int calories = 350);
void show(const CandyBar & candy);

int main()
{
    CandyBar my_candy;
    set(my_candy);
    show(my_candy);
    return 0;
}

void set(CandyBar & candy, char * name, const double weight, const int calories)
{
    candy.name = name;
    candy.weight = weight;
    candy.calories = calories;
}

void show(const CandyBar & candy)
{
    cout<<"name: "<<candy.name<<endl;
    cout<<"weight: "<<candy.weight<<endl;
    cout<<"calories: "<<candy.calories<<endl;
}
