/* programa_28 Imprimir los numeros del 0 al 9
estructura: ciclica for
autor: Luis Alberto Garcia Rodriguez
numero de lista 11
fecha: 5 de marzo del 2015
*/
#include <iostream>
#include <windows.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int x;

    cout<<"\n Programa que imprime los numeros del 0 al 9";
    cout<<"\n\n Estrucutra de control while\n\n";
    for (x=0; x<10; x++)
        {
        cout<<"\n "<<x;
        }
        cout<<"\n\n Presione enter para salir...\n\n";
        system ("pause");

    return 0;
}
