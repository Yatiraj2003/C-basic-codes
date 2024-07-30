#include<iostream>
using namespace std;
int* fun(int Size)
{
    int *p=new int[Size];
    for(int i=0;i<=Size;i++)
    {
        p[i]=5*i;
    }
    cout<<p<<endl;
    return p;
}
main()
{
    int *ptr=fun(5);
    for(int i=0;i<=5;i++)
    {
        cout<<ptr[i]<<endl;
    }
    cout<<ptr<<endl;
}
