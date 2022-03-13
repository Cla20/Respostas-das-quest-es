#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int MDC(int x, int y){
    int menor, resultado = 1;

      if(x < y){
          menor = x;
    } else {
        menor = y;
    }

    for (int d  = 1;  d <= menor; d++){
        if(x % d == 0 and y % d == 0){
            resultado = d;
        }
    }
    return resultado;
}
int main(){
	
    setlocale(LC_ALL, "Portuguese_Brazil");

	printf("Progama que informa o MDC dos n�meros.\n\n");
	
    int numero_1, numero_2, resultado_final;

    printf("\n Informe o primeiro n�mero:\n ");
    scanf("%d", &numero_1);

    printf("\n Informe o segundo n�mero:\n ");
    scanf("%d", &numero_2);

    resultado_final = MDC(numero_1, numero_2);

	printf("\n________________________________________\n");
    printf("\n O MDC dos n�meros informados �: %d ", resultado_final);

    return 0;

}
