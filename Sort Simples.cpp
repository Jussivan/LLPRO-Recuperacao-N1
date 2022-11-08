#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (){
  setlocale(LC_ALL, "Portuguese_Brazil");
  int A, B, C;
  printf("Digite o primeiro valor:\n");
  scanf("%d", &A);
  printf("Digite o segundo valor:\n");
  scanf("%d", &B);
  printf("Digite o terceiro valor:\n");
  scanf("%d", &C);
  printf("Valores em ordem crescente:\n");

  if (A <= B && B <= C){
    printf("%d\n", A);
    printf("%d\n", B);
    printf("%d\n", C);
  } else {
    if (A <= C && C <= B){
      printf("%d\n", A);
      printf("%d\n", C);
      printf("%d\n", B);
    } else {
      if (B <= A && A <= C){
        printf("%d\n", B);
        printf("%d\n", A);
        printf("%d\n", C);
      } else {
        if (B <= C && C <= A){
          printf("%d\n", B);
          printf("%d\n", C);
          printf("%d\n", A);
        } else {
          if (C <= A && A <= B){
            printf("%d\n", C);
            printf("%d\n", A);
            printf("%d\n", B);
          } else {
            if (A == B && B == C){
              printf("%d\n", A);
              printf("%d\n", B);
              printf("%d\n", C);
            }
          }
        }
      }
    }

}
  printf("Valores na sequência como foram lidos:\n");
  printf("%d\n", A);
  printf("%d\n", B);
  printf("%d\n", C);
  return 0;
}