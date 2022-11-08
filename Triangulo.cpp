#include <stdio.h>
 
 int main() {
	double a, b, c, A, B, C;
	printf("Informe o valor do Lado 1: ");
	scanf("%lf", &a);
	printf("Informe o valor do Lado 2: ");
	scanf("%lf", &b);
	printf("Informe o valor do Lado 3: ");
	scanf("%lf", &c);

	if (a>=b && a>=c) {
		A = a;
		B = b;
		C = c;	
	} else if (b>=a && b>=c) {
		A = b;
		B = a;
		C = c;	
	} else {
		A = c;
		B = b;
		C = a;	
	}
	
    if (A>=B+C) {
    	printf("NAO FORMA TRIANGULO\n");
	} else {
	if ((A*A)==(B*B)+(C*C)) {
    	printf("TRIANGULO RETANGULO\n");
	} else if ((A*A)>(B*B)+(C*C)) {
    	printf("TRIANGULO OBTUSANGULO\n");
	} else if((A*A)<(B*B)+(C*C)) {
    	printf("TRIANGULO ACUTANGULO\n");
	}
	if((A==B) && (B==C) && (C==A)) {
    	printf("TRIANGULO EQUILATERO\n");
	} else if ((A==B && A!=C)||(B==C && B!=A)||(C==A && C!=B)) {
    	printf("TRIANGULO ISOSCELES\n");
	}
	}
    return 0;
}
