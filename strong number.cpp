#include<iostream>
using namespace std;
int main()
{
    int i,n,r,fact,temp,sum=0;
    cout<<"Enter a number\n";
    cin>>n;
    temp=n;
    while(n>0)
    {
        r=n%10;
        fact=1;
        for(i=r;i>=1;i--)
        {
            fact=fact*i;
            }
            sum=sum+fact;
            n=n/10;
    }


    if(sum==temp)
    {
        cout<<n<<" is a strong number"<<" = "<<sum<<endl;
    }
}
