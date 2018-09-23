#include <iostream>
using namespace std;
double solve(double c)
{
    return c*63240;
}
int main()
{
    double ly;
    cout << "Enter the number of light years: ";
    cin >> ly;
    cout << ly << " light years = " << solve(ly) << " astronomical units.";
    return 0;
}
