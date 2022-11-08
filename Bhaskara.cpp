#include <stdio.h>
#include <math.h>

int main (){
	double A, B, C, R1, R2;
	printf("Digite o primeiro valor:\n");
	scanf("%lf", &A);
	printf("Digite o segundo valor:\n");
	scanf("%lf", &B);
	printf("Digite o terceiro valor:\n");
	scanf("%lf", &C);
	if ((B*B - 4*A*C)<0 || A==0) {
        printf("Impossivel calcular\n");
    }
    else{
        R1 = (-B + sqrt(B*B - 4*A*C))/(2*A);
        R2 = (-B - sqrt(B*B - 4*A*C))/(2*A);
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }
    return 0;
}