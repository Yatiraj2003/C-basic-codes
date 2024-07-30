#include<iostream>
using namespace std;

void read(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}

void Reverse(int a[],int n)
{
    int temp,i=0,j=n-1;
    while(i<j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }

}
void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}


int main()
{
    int n,a[50];
    cout<<"Enter a size of an array\n";
    cin>>n;
    cout<<"Enter array elements\n";
    read(a,n);
    cout<<"Reverse of an array is "<<endl;
    Reverse(a,n);
    display(a,n);
}
