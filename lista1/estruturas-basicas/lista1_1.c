#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    printf("\na) 3 + 4 = %d", 3+4);
    printf("\nb) 7 / 4 = %.2f", 7/4.0);
    printf("\nc) 3^2 = %.f", pow(3, 2));
    printf("\nd) 5.3 * 2.1 = %.2f", 5.3*2.1);
    printf("\ne) 2 * 5 - 2 = %d", 2*5-2);
    printf("\nf) 2 + 2 * 5 = %d", 2+2*5);
    printf("\ng) (2 + 5) * 3 = %d", (2+5)*3);
    printf("\nh) sin(3.141502) = %f", sin(3.141502));
    printf("\ni) sqrt(5) = %f", sqrt(5));
    printf("\nj) 1 + 2 + 3 = %d", 1+2+3);
    printf("\nk) 1 * 2 * 3 = %d", 1*2*3);
    printf("\nl) (1 + 2 + 3) / 3.0 = %.1f", (1+2+3)/3.0);
    printf("\nm) (2 + 4) * (3 – 1) = %d", (2+4)*(3-1));
    printf("\nn) (9 / 3) + (3 * 2) = %d", (9/3)+(3*2));
    printf("\no) sin(4.5) + cos(3.7) = %f", sin(4.5)+cos(3.7));
    printf("\np) log(2.3) - log(3.1) = %f", log(2.3)-log(3.1));
    printf("\nq) log (7) + (log(7) * log(7) - cos(log(7))) = %f", log(7)+(log(7)*log(7)-cos(log(7))));
    printf("\nr) (10.3 + 8.4)/50.3 - (10.3 + 8.4) = %f", (10.3+8.4)/50.3-(10.3+8.4));
    printf("\ns) (cos(0.8) + sin(0.8)) * (cos(0.8) - sin(0.8)) = %f", (cos(0.8)+sin(0.8))*(cos(0.8)-sin(0.8)));
}
