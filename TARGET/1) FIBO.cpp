#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fibonacci(int n) {
    int a = 0, b = 1, temp;

    while (a <= n) {
        if (a == n) {
            return 1;  
        }
        temp = a + b;  
        a = b;
        b = temp;
    }
    
    return 0;  
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    int numero;

    printf("\n\n\tdigite um numero para ser verificado se está na sequencia de Fibonacci: ");
    scanf("%d", &numero);
    system("cls");

    if (fibonacci(numero)) {
    	printf("\n\n\tnumero escolhido: %d\n", numero);
    	printf("\n\tresposta:", numero);
        printf("\n\t%d esta na sequencia de Fibonacci.\n", numero);
    } else {
    	printf("\n\tnumero escolhido: %d\n", numero);
    	printf("\n\tresposta:", numero);
        printf("\n\t%d nao esta na sequencia de Fibonacci.\n", numero);
    }

    return 0; 
}

