
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
    float numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);

	if (numero>100){
		printf("\nValor maior que 100");
	}
	else if (numero==100){
		printf("\nO número é 100");
	}
	else{
		printf("\nO número é menor que 100");
	}
	


    return 0;
    
}

