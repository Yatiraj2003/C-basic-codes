#include<iostream>
using namespace std;
int Max(int x,int y)
{
    return x>y?x:y;
}
int Min(int x,int y)
{
    return x<y?x:y;
}

int main()
{
    int* p(int,int);
    p=Max;
    *p(10,5);
    p=Min;
    *p(10,5);
}
