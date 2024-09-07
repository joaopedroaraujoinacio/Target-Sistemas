#include <stdio.h>
#include <string.h>  
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    char str[100]; 
    int i, count = 0;  

    printf("\n\n\tpor favor digite uma frase ou palavra: ");
    fgets(str, sizeof(str), stdin); 

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            count++;
        }
    }

    if (count > 0) {
        printf("\n\n\tletra >a< ou >A< aparece %dx.\n", count);
    } else {
        printf("\n\n\tletra >a< ou >A< nao apareceu nenhuma vez.\n");
    }

    return 0;
}

