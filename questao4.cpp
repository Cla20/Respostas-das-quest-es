#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float cal_volume(float r){
    float V;

    V = 4.0/3.0 * pow(r, 3);

    return V;
}
int main(){
	
    setlocale(LC_ALL, "Portuguese");

	printf("Programa que calcula o volume do raio de uma esfera.\n\n");
	
    float Y, resultado;

    printf(" Informe o valor do raio: ");
    scanf("%f", &Y);

    resultado = cal_volume(Y);
    

    printf("\n O volume da esfera é: %.2f é: %.2f\n", Y, resultado);

   system("Pause");   
   
    return 0;
} 
