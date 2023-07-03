#include <stdio.h>
#include <stdlib.h>

int main()
{
float base,altura;

printf("Introduza la base del rectangulo");
scanf("%f", &base);
printf("Introduzca la altura del rectangulo");
scanf("%f", &altura);

float area= base*altura;

printf("el area del rectangulo de base %.2f y altura %.2f es: %.2f ", base,altura, area);

}
