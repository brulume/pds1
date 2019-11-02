#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a, b, c, d = 0;
    printf("Informe quatro números (a, b, c, d).\na = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);
    printf("d = ");
    scanf("%f", &d);
    printf("\na) a+b = %f", a+b);
    if(c!=0) {
        printf("\nb) a/c = %f", a/c);
    } else {
        printf("\nb) a/c = [Divisao por zero]");
    }
    printf("\nc) a^2 = %f", pow(a, 2));
    printf("\nd) b*c = %f", b*c);
    printf("\ne) a*b-c = %f", a*b-c);
    printf("\nf) a+b*c = %f", a+b*c);
    printf("\ng) (a+b)*c = %f", (a+b)*c);
    printf("\nh) sin(a) = %f", sin(a));
    printf("\ni) sqrt(b) = %f", sqrt(b));
    printf("\nj) a+b+c = %f", a+b+c);
    printf("\nk) a*b*c = %f", a*b*c);
    if(d!=0) {
        printf("\nl) (a+b+c)/d = %f", (a+b+c)/d);
    } else {
        printf("\nl) (a+b+c)/d = [Divisao por zero]");
    }
    printf("\nm) (a+b)*(a-d) = %f", (a+b)*(a-d));
    if(c!=0) {
        printf("\nn) (b/c)+(a*d) = %f", (b/c)+(a*d));
    } else {
        printf("\nn) (b/c)+(a*d) = [Divisao por zero]");
    }
    printf("\no) sin(b)+cos(a) = %f", sin(b)+cos(a));
    if (a<=0 || c<=0) {
        printf("\np) log(a)-log(c) = [Log definido para x<0]");
    } else {
        printf("\np) log(a)-log(c) = %f", log(a)-log(c));
    }
    if(a<=0 || b<=0 || c<=0 || d<=0){
        printf("\nq) log(a)+(log(b)*log(d)-cos(log(c))) = [Log definido para x<0]");
    } else {
        printf("\nq) log(a)+(log(b)*log(d)-cos(log(c))) = %f", log(a)+(log(b)*log(d)-cos(log(c))));
    }
    if(c!=0) {
        printf("\nr) (b+a)/c-(d+a) = %f", (b+a)/c-(d+a));
    } else {
        printf("\nr) (b+a)/c-(d+a) = [Divisao por zero]");
    }
    printf("\ns) (cos(d)+sin(c))*(cos(b)-sin(a)) = %f", (cos(d)+sin(c))*(cos(b)-sin(a)));
    return 0;
}
