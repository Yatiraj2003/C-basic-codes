#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age\n";
    cin>>age;
    if(age>=12 && age<=50)
        cout<<"young\n";
    else
        cout<<"not young\n";
}
