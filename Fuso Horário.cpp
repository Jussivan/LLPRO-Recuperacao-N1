#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int saida, tempo, FH;
	printf("Informe o hor�rio de sa�da: ");
  	scanf("%d", &saida);
  	printf("Informe o tempo de viagem: ");
  	scanf("%d", &tempo);
  	printf("Informe o Fuso Hor�rio do destino com rela��o a origem: ");
  	scanf("%d", &FH);
  	if (saida == 0) {
    saida = 24;
  	}
  	saida = ((saida + tempo + FH)%24);
  	printf("A hora prevista no destino �: %d\n",saida);
	return 0;
}
