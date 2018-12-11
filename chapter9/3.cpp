#include<iostream>
#include<cstring>

using namespace std;

struct chaff{
    char dross[20];
    int slag;
};

int main()
{
    int n=2;
    chaff buffer1[n];
    chaff arr[n] = {
        {"shao", 24},
        {"zhengjiang", 23},
    };
    chaff * buffer2 = new (buffer1) chaff [n];
    for(int i=0;i<n;i++)
    {
        cout<<"buffer2["<<i<<"]:"<<endl;

        strcpy(buffer2[i].dross, arr[i].dross);
        cout<<"dross:"<<buffer2[i].dross<<endl;

        buffer2[i].slag = arr[i].slag;
        cout<<"slag:"<<buffer2[i].slag<<endl;
    }
    return 0;
}
