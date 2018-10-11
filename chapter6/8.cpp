#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream myfile;
    myfile.open("test.txt");
    char ch;
    int num = 0;
    while(myfile >> ch)
    {
        num++;
    }
    myfile.close();
    cout<<num<<endl;
    return 0;
}
