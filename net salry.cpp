#include<iostream>
using namespace std;
int main()
{
    float bs,a,d,net;
    cout<<"Enter the basic salary , percentage of allownace and percentage of deduction\n";
    cin>>bs>>a>>d;
    net=bs+(bs*(a/100))-(bs*(d/100));
    cout<<"net salary is"<<"  "<<net<<endl;
    return 0;

}
