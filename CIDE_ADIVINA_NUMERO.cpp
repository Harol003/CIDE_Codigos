/* 
un programa sencillo para jugara a adivinar un n�mero entre 0 y 9 
Nota: Sleep() y system("cls") son v�lidos en windows

Modificalo para que:
- Limite la cantidad de intentos (a tres, por ej.)
- Muestre la cantidad de intentos utilizados (puede asgnar un puntaje...)
- El n�mero "inc�gnita" sea aleatorio en lugar de constante
*/

/*CIDE FUNDAMENTOS DE PROGRAMACION HHTN*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define ENIGMA  5   // el n�mero "inc�gnita"
int main() {
    int numero = 0;
    printf("adivine el nro. (entre 0 y 9)\n");
    Sleep(5000);  // demora 5000 ms -> 5 s 
    system("cls"); // borra la pantalla 
    while(numero != ENIGMA) { // repite si no se adivin� el nro. 
        printf("no adivino aun\n");
        Sleep(1000);
        scanf("%d", &numero);
    } 
    printf("Adivino!!\n");
    return 0;
}
