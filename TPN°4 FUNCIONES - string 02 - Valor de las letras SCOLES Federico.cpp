#include <bits/stdc++.h>
using namespace std;

int SumarValores (string f);
int main(int argc, char *argv[])
{
string frase;
cout<<"Ingrese una oración: ";
getLine(cin, frase);
cout<<"El valor total es "<<SumarValores(frase)<<endl;

return 0;
}

int SumarValores (string f){
    int sumaT=0;
       for(int i=0; i<f.size(); i++){
          if (f[i]== 'a'|| f[i]== 'e')
            sumaT++;
          if (f[i]== 'o'|| f[i]== 's')
            sumaT=(sumaT+2);
          if (f[i]== 'd'|| f[i]== 'i'|| f[i]== 'n'|| f[i]== 'r')
            sumaT=(sumaT+3);
          if (f[i]== 'c'|| f[i]== 'l'|| f[i]== 't'|| f[i]== 'u')
            sumaT=(sumaT+4);
          if (f[i]== 'm'|| f[i]== 'p')
            sumaT=(sumaT+5);
          if (f[i]== 'b'|| f[i]== 'f'|| f[i]== 'g'|| f[i]== 'h'|| f[i]== 'j'|| f[i]== 'q'|| f[i]== 'v'|| f[i]== 'x'|| f[i]== 'y'|| f[i]== 'z')
            sumaT=(sumaT+6);
          if (f[i]== 'k'|| f[i]== 'w')
            sumaT=(sumaT+7);
            }
    return sumaT;
}
