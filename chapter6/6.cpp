#include<iostream>
#include<string>

using namespace std;

int main()
{
    struct Patron
    {
        string name;
        double money;
    };

    cout<<"please enter patron number:";
    int num;
    cin>>num;

    Patron * pt = new Patron[num];

    for(int i = 0; i < num; i++)
    {
        cout<<"please enter "<<i+1<<" name:";
        cin>>(pt + i)->name;
        cout<<"please enter "<<i+1<<" money:";
        cin>>(pt + i)->money;
    }
    int great_patron = 0;
    cout<<"\ngreat patron:"<< endl;
    for(int i=0;i<num;i++)
    {
        if(pt[i].money >= 10000)
        {
            cout<<pt[i].name<<endl;
            great_patron++;
        }
    }
    if(great_patron == 0) cout<<"none"<<endl;
    int patron = 0;
    cout<<"\npatron:"<<endl;
    for(int i=0;i<num; i++)
    {
        if(pt[i].money < 10000)
        {
            cout<<pt[i].name<<endl;
            patron++;
        }
    }
    if(patron == 0) cout<<"none"<<endl;
    delete [] pt;
    return 0;
}
