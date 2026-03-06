
#include <stdio.h>
#include <locale.h>>

int main(){
	setlocale(LC_ALL,"");
    int saque;
    int n100, n50, n20, n10, n5;

    printf("Digite o valor que deseja sacar: ");
    scanf("%d", &saque);

    n100 = saque / 100;
    saque = saque % 100;

    n50 = saque / 50;
    saque = saque % 50;

    n20 = saque / 20;
    saque = saque % 20;

    n10 = saque / 10;
    saque = saque % 10;

    n5 = saque / 5;

    printf("\nNotas de 100: %d\n", n100);
    printf("Notas de 50: %d\n", n50);
    printf("Notas de 20: %d\n", n20);
    printf("Notas de 10: %d\n", n10);
    printf("Notas de 5: %d\n", n5);

    return 0;
    
}

