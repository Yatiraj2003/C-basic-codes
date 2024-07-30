#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,d,x1,x2;
    cout<<"Enter the values of a,b,c\n";
    cin>> a>> b>> c;
    d=b*b-4*a*c;
    if(d==0)
    {   x1=-b/(2*a);
        cout<<"real and equal\n";
        cout<<x1<<endl;
    }
    else if(d>0)
    {

            cout<<"real and distinct\n";
            x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);
            cout<<x1<<endl;
            cout<<x2<<endl;
    }

        else if(d<0)
        {
            cout<<"imaginary\n"<<endl;
        }
return 0;

}
