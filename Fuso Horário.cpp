#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int saida, tempo, FH;
	printf("Informe o horário de saída: ");
  	scanf("%d", &saida);
  	printf("Informe o tempo de viagem: ");
  	scanf("%d", &tempo);
  	printf("Informe o Fuso Horário do destino com relação a origem: ");
  	scanf("%d", &FH);
  	if (saida == 0) {
    saida = 24;
  	}
  	saida = ((saida + tempo + FH)%24);
  	printf("A hora prevista no destino é: %d\n",saida);
	return 0;
}
