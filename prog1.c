#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int opc, cpf, total;

  printf("MENU\n\n");
  printf("Escolha uma Opção:\n");
  printf("1 - Cadastro\n");
  printf("2 - Consulta de cadastro\n");
  printf("3 - Opção 3\n");
  printf("4 - Opção 4\n");
  printf("5 - Opção 5\n");
  scanf("%d", &opc);

  if(opc==1)
  {
    printf("Informe seu CPF:");
    scanf("%d", &cpf);
    int strlen(char *cpf)
{
    int total=0;

    while( cpf[total] != '\0')
        total++;

    return total;
}
    if(cpf>=11)
    printf("RAFA ROLUDO");
    }
    return 0;
  }
