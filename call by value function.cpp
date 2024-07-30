#include<iostream>
using namespace std;
void Swap(int m,int n)
{
    int temp;
    temp=m;
    m=n;
    n=temp;
    cout<<m<<" "<<n<<endl;
}

int main()
{
    int x=10,y=20;
    Swap(x,y);

}
