//Stefano Adamo
//Corso BackEnd 2016-2018
//15\01\2017

/*

*  Leggere 8 cifre decimali (come carattere) e calcolare e stampare il numero corrispondente

*/



#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int calcolo(int pos)
{
   int numero=10;
   int i=0;
   for(i=1;i<pos;i++)
   {
      numero=numero *10;
   }
   return numero;

  }


char lettura()
{
    char cifra;
    cifra='b';
    while(cifra<'0'||cifra>'9')
        {
           printf("\ninserire una cifra decimale : ");
           cifra=getche();
        }
        return cifra;
}

int main(int argc, char *argv[])
{
    char cifra;
    int elevamento;
    int numero;   //numero corrispondente agli 8 caratteri
    int num;  // singola cifra decimale convertita in un intero
    int pos;  // contatatore utilizzato per il calcolo del numero di 8 caratteri
    int i;
    numero=0;
    num=0;
    pos=7;  //perche l ultimo numero e da moltiplicare per 1

    for(i=0;i<8;i++)
    {
        cifra=lettura();
        num=cifra-'0';
        elevamento=calcolo(pos);
        numero=numero+num*(elevamento);
        pos--;

    }

    printf("\nil numero e : %d",numero);

    return 0;
}
