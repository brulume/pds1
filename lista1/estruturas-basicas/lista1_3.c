#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159

int main(){
    float a, b, c = 0.0;
    printf("Informe tres numeros reais (a, b, c).\na = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);

    printf("\na) Media (a,b,c) = %f", (a+b+c)/3);
	printf("\nb) Considerando os pesos:\n\t3 para a\n\t4 para b\n\t5 para c");
	printf("\n Media ponderada (a,b,c) = %f", (a*3+b*4+c*5)/(3+4+5));
    printf("\nc) Perimetro do circulo de raio a = %f", 2*PI*a);
    printf("\nd) Area do circulo de raio a = %f", PI*(a*a));
    if (a!=0 && b!=0 && c!=0) {
        if (a<(b+c) && b<(a+c) && c<(a+b)) {
            printf("\ne) Area do triangulo de base b e altura c = %f", (b*c)/2.0);
            printf("\nf) Hipotenusa do triangulo retangulo de lados b e c = %f", sqrt(b*b+c*c));
        } else {
            printf("\ne) Area do triangulo de base b e altura c = [Medidas nao formam triangulo]");
            printf("\nf) Hipotenusa do triangulo retangulo de lados b e c = [Medidas nao formam triangulo]");
        }
    } else {
        printf("\ne) Area do triangulo de base b e altura c = [Um dos lados = zero]");
        printf("\nf) Hipotenusa do triangulo retangulo de lados b e c = [Um dos lados = zero]");
    }
    printf("\ng) Raizes da equacao do 2o grau definida por ax^2 + bx + c");
    if (a != 0 && b != 0) { //confere equacao do 2o grau
        float delta = b*b-(4*a*c);
        printf("\n\tdelta = %f", delta);
        if (delta >= 0) {
            float x1 = ((-1)*b + sqrt(delta))/2*a;
            float x2 = ((-1)*b - sqrt(delta))/2*a;
            printf("\n\tx1 = %f", x1);
            printf("\n\tx2 = %f", x2);
        } else {
            printf("\n\tA equacao dada nao possui raizes reais.");
        }
    } else if (a == 0 && b != 0){   //confirma equacao do 1o grau
        printf("\n\tA equacao dada eh do 1o grau e sua raiz = %f", (-1)*c/(b));
    } else if (a == 0 && b == 0 && c == 0){
        printf("\n\tOs valores nao conferem uma equacao do 1o ou do 2o grau.");
    }
}

