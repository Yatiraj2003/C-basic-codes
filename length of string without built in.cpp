#include<iostream>
#include<cstring>

using namespace std;
int main()
{
    string str;
    int count1=0;
    cout<<"Enter a string\n";
    getline(cin,str);
    for(int i=0;str[i]!='\0';i++)
    {
        count1++;
    }
    cout<<"length of string is \n"<<count1<<endl;

}
