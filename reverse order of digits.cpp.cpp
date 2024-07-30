#include<iostream>
using namespace std;
int main()
{
    int rev=0,i,digit,n,temp;
    cout<<"Enter a number\n"<<endl;
    cin>>n;
    temp=n;
    while(n>0)
    {
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    cout<<"Reverse of  "<<temp<<" is "<<rev<<endl;
}
