#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float p_ideal(float altura, char sexo){
    float p;

    if(sexo == 'M'){
        p = (72.7 * altura) - 58;
        printf(" Seu peso ideal é: %.2f kg", p);
    }
    else if(sexo == 'F'){ 
        p = (62.1 * altura) - 44.7;
        printf(" Seu peso ideal é: %.2f kg", p);
    }
}

int main(){
	
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    float alt;
    char sexo;
	
    printf("\t\t\t Progama para calcular o peso ideal.\n\n");
    printf("Informe a sua altura em metros: \n");
    scanf("%f", &alt);
     fflush(stdin);

    printf("\nInforme o seu sexo. ");
    printf("\nDigite M (masculino) ou F (feminino): \n");
    scanf("%c", &sexo);
    fflush(stdin);

    p_ideal(alt, sexo);
     
     return 0;
}


