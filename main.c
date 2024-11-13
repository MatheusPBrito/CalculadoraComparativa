#include <stdio.h>

int main(){

  int num1,num2,num3, res;

  printf("Escreva o primeiro número: ");
  scanf("%d", &num1);
  printf("Escreva o segundo número: ");
  scanf("%d",&num2);
  printf("Escreva o terceiro número: ");
  scanf("%d",&num3);
  printf("\n");

  res = num1 + num2 + num3;
  printf("A soma dos três valores é: %d\n", res);
  res = num1 - num2 - num3;
  printf("A subtração dos três valores é: %d\n", res);
  res = num1 * num2 * num3;
  printf("A multiplicação dos três valores é: %d\n", res);
  res = num1 / num2 / num3;
  printf("A divisão dos três valores é: %d\n\n", res);

  if(num1 > num2)
     printf("O primeiro valor é maior que o segundo\n");
  else
     printf("O primeiro valor é menor que o segundo\n");

  if(num3 < num2)
    printf("O terceiro valor é menor que o segundo\n");
  else 
    printf("O terceiro valor é maior que o segundo\n");

  if (num1 > 0 && num2 % 2 == 0)
    printf("O primeiro valor é positivo e o segundo valor é par\n");

  return 0;
}
