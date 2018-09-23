#include<iostream>
using namespace std;
float solve(float t)
{
    return t*1.8 + 32.0;
}
int main()
{
    cout<<"Please enter a Celsius value: ";
    float t;
    cin>>t;
    cout<<t<<" degrees Celsius is "<<solve(t)<<" degrees Fahrenheit.";
}
