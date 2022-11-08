#include <stdio.h> 
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
    int comeco, fim, duracao;
    printf("Informe que horas o jogo começou:\n");
    scanf("%d", &comeco);
    printf("Informe que horas o jogo terminou:\n");
    scanf("%d", &fim);    
    if (comeco < fim){
    duracao = (fim - comeco);
    printf("O JOGO DUROU %d HORA(S)\n", duracao);
    } else {
    if (comeco == fim){
      printf("O JOGO DUROU 24 HORA(S)\n");
    } else {
      duracao = (24 - comeco + fim);
      printf("O JOGO DUROU %d HORA(S)\n", duracao);
    }
  }
return 0;
}