#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float recebe(float base, int exp){
    if(exp == 0){
        return 1;
    }
    else{
        return base * recebe(base, exp - 1);
    }
}

int main(){
	
    setlocale(LC_ALL, "Portuguese_Brazil");

    printf("Progama que calcula a base elevada ao expoente. \n\n");
    
    float base, resultado_final;
    int expoente;

    printf("Informe o valor da base: \n ");
    scanf("%f", &base);

    printf("Informe o valor do expoente: \n ");
    scanf("%d", &expoente);

    resultado_final = recebe(base, expoente);
    
    printf("________________________________________________\n");
    printf("\nO resultado final é: %.1f", resultado_final);
}
