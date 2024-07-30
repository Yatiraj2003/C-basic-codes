#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string\n";
    getline(cin,str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;N
        }

    }
    cout<<str;
}
