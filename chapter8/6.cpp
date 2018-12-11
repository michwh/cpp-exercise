#include<iostream>
#include<cstring>
using namespace std;

template <typename T>
T maxn(T * arr, int n)
{
    T max = arr[0];
    for(int i = 0; i < n; ++i)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    return max;
}

template <>
char * maxn<char *>(char ** arr, int n)
{
    int maxLen = strlen(arr[0]);
    int maxId = 0;
    for(int i=0;i<n;i++)
    {
        if(strlen(arr[i]) > maxLen)
        {
            maxLen = strlen(arr[i]);
            maxId = i;
        }
    }
    return arr[maxId];
}

int main()
{
    int arr_int[6] = {1, 2, 3, 4, 5, 6};
    double arr_flt[4] = {10.0, 11.0, 12.0, 13.0};
    char * arr_ch[4] = {
        "shao",
        "zhengjiang",
        "haha",
        "yesyesyesgood",
    };

    cout << "Max int: " << maxn(arr_int, 6) << endl;
    cout << "Max double: " << maxn(arr_flt, 4) << endl;
    cout << "Max string: " << maxn(arr_ch, 4) << endl;
    return 0;
}
