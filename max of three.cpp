#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers\n";
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<a;
    }
    else
    {
        if(c>a && c>b)
            cout<<c;
        else
            cout<<b;
    }
}
