#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1;
    int count1=0,X,count2=0,Y,count3=0,Z;
    cout<<"Enter a string\n";
    getline(cin,s1);
    for(int i=0;s1[i]!='\0';i++)
    {
        if(s1[i]=='a'||s1[i]=='A'||s1[i]=='e'||s1[i]=='E'||s1[i]=='i'||s1[i]=='I'||s1[i]=='O'||s1[i]=='o'||s1[i]=='U'||s1[i]=='u')
         {
              count1++;
         }
          else if(s1[i]==' ')
          {
              count3++;
          }
          else
          {
            count2++;}

    }
    cout<<"no of vowel are \n"<<count1<<"nof consoneants are\n"<< count2<<"no of words are \n "<<count3+1;

}
