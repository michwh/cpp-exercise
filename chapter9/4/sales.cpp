#include <iostream>
using namespace std;

namespace SALES
{
    const int QUARTERS = 4;
    struct Sales
    {
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };

    //把ar的前n项复制给s.sales,其他项设为0。
    //计算s.sales的平均数、最大值和最小值，并分别记录在s.average s.max和s.min中
    void setSales(Sales & s, const double ar[], int n)
    {
        for(int i=0;i<QUARTERS;i++)
        {
            if(i<n) s.sales[i]=ar[i];
            else s.sales[i]=0.0;
        }

        double sum=0.0;
        s.max=s.sales[0];
        s.min=s.sales[0];
        for(int i=0;i<QUARTERS;i++)
        {
            sum+=s.sales[i];
            if(s.sales[i]>s.max) s.max=s.sales[i];
            if(s.sales[i]<s.min) s.min=s.sales[i];
        }
        s.average=sum/(float)QUARTERS;
    }

    //有用户输入s.sales的数据
    //计算s.sales的平均数、最大值和最小值，并分别记录在s.average s.max和s.min中
    void setSales(Sales & s)
    {
        cout << "Enter sales:" << endl;
        for(int i = 0; i < QUARTERS; ++i)
        {
            cout << "sales[" << i << "]: ";
            cin >> s.sales[i];
        }

        // get average, max, min
        double sum = 0.0;
        double max = s.sales[0], min = s.sales[0];
        for(int i = 0; i < QUARTERS; ++i)
        {
            double cur = s.sales[i];
            if(cur > max)
                max = cur;
            if(cur < min)
                min = cur;
            sum += cur;
        }
        s.average = sum/(float)QUARTERS;
        s.max = max;
        s.min = min;
    }
    void showSales(const Sales & s)
    {
        // show sales
        cout << "sales: ";
        for(int i = 0; i < QUARTERS; ++i)
            cout << s.sales[i] << " ";        
        cout << endl;

        // show average
        cout << "average: " << s.average << endl;

        // show max and min
        cout << "max: " << s.max << endl;
        cout << "min: " << s.min << endl;
    }
}