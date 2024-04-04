#include <bits/stdc++.h>
using namespace std;

int ContarLetrasA (string n);
int main(int argc, char *argv[])
{
string frase;
cout<<"Ingrese una frase: ";
cin>>frase;
cout<<"La cantidad de veces que se muestra una vocal son"<<ContarLetrasA(frase)<<endl;

return 0;
}

int ContarLetrasA (string n){
    int vocales=0;
        for(int i=0; i<size(); i++){
           if(n[i]== 'a'||n[i]== 'e'||n[i]== 'i'||n[i]== 'o'||n[i]== 'u');
           vocales++;
        }
    return vocales;
}
