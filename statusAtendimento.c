#include "header.h"
#include "telas.h"

int gerenciadorStatusAtendimento()
{
    printf("\t\t\t\t\t\n\n\n\n\n\n  1 - CONSULTA\t\t\t\t\t\n\n  2 - INCLUSAO\t\t\t\t\t\n\n  3 - ALTERACAO\t\t\t\t\t\n\n  4 - EXCLUSAO\t\t\t\t\t\n\n  5 - VOLTAR");
    telaGeral();

    char op;
    op=getch();

    switch(op){
    case '1' :
        system("cls");
        consultaStatusAtendimento();

    case '2' :
        system("cls");
        inclusaoStatusAtendimento();
        system("cls");
        gerenciadorStatusAtendimento();
        break;

    case '3' :
        system("cls");
        alteracaoStatusAtendimento();

    case '4' :
        system("cls");
        exclusaoStatusAtendimento();

    case '5' :
        system("cls");
        telaNivelDois();

    default :
        system("cls");
        printf("Valor Inválido!");
        gerenciadorStatusAtendimento();
    }
  return 0;
}

int consultaStatusAtendimento()
{


  return 0;
}

int inclusaoStatusAtendimento()
{

  int  statusDoAtendimento;
  char codigoDoCliente[6],continua[4],CNPJ[14];
  float saldo;

  strcpy(continua,"S");
  FILE *arquivo; /*cliente.dat abertura do arquivo. Caso ocorra falha, finaliza o programa.*/
  if((arquivo=fopen("cliente.dat", "a"))==NULL)
  {
    printf("Falha na abertura do arquivo!");
    strcpy(continua,"N");
    getch();
  }
  while(strcmp(continua,"N")!=0)
  {
    system("cls");
    printf("Digite o codigo do cliente...........: ");
    scanf("%s", codigoDoCliente);
    printf("Digite o cnpj do cliente........: ");
    scanf("%s", CNPJ);
    printf("Digite o status do atendimento do cliente: ");
    scanf("%d", &statusDoAtendimento);

    fprintf(arquivo, "%s %s %d\n",codigoDoCliente,CNPJ,statusDoAtendimento);

    printf("Deseja continuar?(S/N): ");
    scanf("%s", continua);
  }
  fclose(arquivo);


  return 0;
}

int alteracaoStatusAtendimento()
{



  return 0;
}

int exclusaoStatusAtendimento()
{



  return 0;
}
