#include<iostream>
using namespace std;
void Swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int x=10,y=20;
    Swap(&x,&y);
    cout<<x<<" "<<y<<endl;
}
