#include <iostream>
using namespace std;
int main(void)
{

    struct Pizza{
        char company[30];
        double diameter;
        double weight;
    };

    Pizza p;

    cout << "Enter company name: ";
    cin.getline(p.company,30);
    cout << "Enter diameter of pizza: ";
    cin >> p.diameter;
    cout << "Enter weight of pizza: ";
    cin >> p.weight;

    cout << "Company: " << p.company << endl;
    cout << "Diameter: " << p.diameter << endl;
    cout << "Weight:" << p.weight << endl;

    return 0;
}
