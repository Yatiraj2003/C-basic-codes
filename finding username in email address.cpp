#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str;
    cout<<"Enter your email address\n";
    getline(cin,str);

    cout<<str.substr(0,str.find("@"))<<endl;

}
