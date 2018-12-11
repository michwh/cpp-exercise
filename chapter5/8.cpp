#include<iostream>
#include<cstring>
//#include<string>

using namespace std;

int main()
{
    int len = 20;
    char cc[20];
    int sum = 0;
    cout << "Enter words (to stop, type the word done):" << endl;
    cin>>cc;
    while(strcmp(cc, "done"))
    {
        sum++;
        cin>>cc;
    }
    cout << "You entered a total of " << sum << " words." << endl;
    return 0;
}