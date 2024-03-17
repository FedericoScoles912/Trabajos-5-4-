#include <bits/stdc++.h>

using namespace std;
int EstMayor (int a, int b, int c){
    if (a>b)&&(a>c)
    {return a;}
    if (b>a)&&(b>c)
    {return b;}
    if (c>a)&&(c>b)
    {return c;}
}
int main(int argc, char *argv[])
{
int n1, n2, n3;

cout<<"Indique un numero:"<<endl;
cin>>n1;
cout<<"Indique un numero:"<<endl;
cin>>n2;
cout<<"Indique un numero"<<endl;
cin>>n3;

cout<<"El numero mayor es"<<EstMayor(n1,n2,n3);
return 0;
}
