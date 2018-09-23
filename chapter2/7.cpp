#include <iostream>
using namespace std;
void ShowMyTime(int h, int m) {
    cout << "Time: " << h << ":" << m;
}
int main()
{
    int h,m;
    cout << "Enter the number of hours: ";
    cin >> h;
    cout << "Enter the number of minutes: ";
    cin >> m;

    ShowMyTime(h, m);

    return 0;
}
