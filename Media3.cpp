#include <stdio.h>
#include <locale.h>
 
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
    float N1, N2, N3, N4, E, media, MF;
    printf("Informe a Nota 1: ");
    scanf("%f", &N1);
    printf("Informe a Nota 2: ");
    scanf("%f", &N2);
    printf("Informe a Nota 3: ");
    scanf("%f", &N3);
    printf("Informe a Nota 4: ");
    scanf("%f", &N4);
    media = ((2*N1)+(3*N2)+(4*N3)+(1*N4))/10;
    printf("A Média é igual a %.1f\n", media);
    if (media>=7.0) {
        printf("Aluno aprovado.\n");
    } else if (media<5.0) {
        printf("Aluno reprovado.\n");
    }
	if (media>=5.0 && media<=6.9) {
        printf("Aluno em exame.\n");
        printf("Informe a Nota do Exame: ");
        scanf("%f", &E);
        printf("Nota do exame: %.1f\n", E);
        MF = (media + E)/2;
    if (MF>=5.0) {
        printf("Aluno aprovado.\n");
        printf("Media final: %.1f\n", MF);
    } else {
        printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n", MF);
    }
    }
    return 0;
}
