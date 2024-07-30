#include<iostream>
using namespace std;

template<class T>
T Max(T x,T y)
{
    if(x>y)
        return x;
    else
        return y;
}

int main()
{
    int c=Max(10,11);
    float k=Max(10.5,6.6);
    cout<<"maximum element is "<<c<<endl;
    cout<<"minimum element is "<<k<<endl;
}

