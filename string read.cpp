#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[50]="x=20;y=10;z=50";
    char *token=strtok(s1,"=;");
    while(token!=NULL)
    {
    cout<<token<<endl;
    token=strtok(NULL,"=;");
    }
    return 0;

}
