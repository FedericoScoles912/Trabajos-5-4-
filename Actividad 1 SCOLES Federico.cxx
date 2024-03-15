#include <bits/stdc++.h>
using namespace std;

bool EsMultiploDe3(int n)
{return n%3==0;
}

int main(int argc, char *argv[])
{
	int num;
	string msg="No es Multiplo";
	cout<<"Ingrese Numero: "<<endl;
	cin>>num
	
	if(EsMultiploDe3(num))
	{msg="Es multiplo"}
	cout<<msg<<endl;
	
	return 0;
}