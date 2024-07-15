#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "PORTUGUESE");

    int num;
    int i = 1;
    
    printf("***TABUADA DE MULTIPLICAÇÃO***");
    
    printf("\n\nDgite um número para fazer a multiplação: ");
    scanf("%d", &num);

    do{	
        printf("\n%d x %d = %d\n", num, i, num*i);
        i++;
    } while(i <= 10);

    return 0;
}
