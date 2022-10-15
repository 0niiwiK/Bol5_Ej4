#include <stdio.h>

int main() {
    int num, acumulador=1;
    printf("Introduzca un numero para calcular su factorial: ");
    scanf("%d",&num);
    for (int i = num; i > 0; i--) {
        acumulador=acumulador*i;
    }
    printf("El factorial de %d (%d!) es: %d",num,num,acumulador);
    return 0;
}
