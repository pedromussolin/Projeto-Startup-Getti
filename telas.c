#include "header.h"
#include "login.h"
#include "servicosEmpresa.h"

#define YELLOW      "\e[0;33m"

void gotoxy(int n, int l)
{
  COORD c;
  c.X = n;
  c.Y = l;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int telaGeral()
{
 int l,c;
 gotoxy(0,0);
 putchar(201);
 gotoxy(79,0);
 putchar(187);
 gotoxy(79,24);
 putchar(188);
 gotoxy(0,24);
 putchar(200);

 for(c=1;c<=78;c++)
 {
   gotoxy(c,0);
   putchar(205);
   gotoxy(c,24);
   putchar(205);
   gotoxy(c,22);
   putchar(205);
 }

 for(l=1;l<=23;l++)
 {
   gotoxy(79,l);
   putchar(186);
   gotoxy(0,l);
   putchar(186);
 }
 gotoxy(0,22);
 putchar(204);
 gotoxy(79,22);
 putchar(185);

 gotoxy(22,23);
 printf("Sistema de controle empresarial- V.1.0\n\n");

 return 0;
}

int logo()
{
    printf("\n\n\n\n\n\n\n\n\n\n\n               _____  _____  _____  _____  _____    _____  _____  _____  _____  _____  _____  _____  __ __ \n              |     ||   __||_   _||     ||   __|  |   __||   __||     ||  |  || __  ||     ||_   _||  |  |\n              | | | ||   __|  | |  |-   -||__   |  |__   ||   __||   --||  |  ||    -||-   -|  | |  |_   _|\n              |_|_|_||_____|  |_|  |_____||_____|  |_____||_____||_____||_____||__|__||_____|  |_|    |_|  ");
    printf("\n\n\t\t\t\t\tPressione qualquer tecla para continuar...");
    getch();
    return 0;
}

int telaInicial()
{
system("cls");

printf("\t\t\t\t\t\n\n\n\n\n\n\n\n  1 - CLIENTE\t\t\t\t\t\n\n  2 - FUNCIONARIO\t\t\t\t\t\n\n  3 - ATENDIMENTO AO CLIENTE, ADM, CEOs, TI\t\t\t\t\t\n\n  4 - FECHAR");
telaGeral();

char op;
    op=getch();

    switch(op){
    case '1' :
        system("cls");
        loginNivelUm();
        system("cls");
        telaNivelUm();
        break;

    case '2' :
        system("cls");
        loginNivelDois();
        system("cls");
        telaNivelDois();
        break;

    case '3' :
        system("cls");
        loginNivelTres();
        system("cls");
        telaNivelTres();
        break;

    case '4' :
        break;

    default :
        printf ("\n\nValor invalido!\n");
        system("pause");
        system("cls");
        telaInicial();
        break;
    }

return 0;
}

int telaNivelUm()
{

 printf("\t\t\t\t\t\n\n\n\n\n\n\n\n\n\n  1 - STATUS DO ATENDIMENTO\t\t\t\t\t\n\n  2 - NOSSOS SERVICOS");
 telaGeral();

    char op;
    op=getch();

    switch(op){
    case '1' :
        system("cls");
        printf("\t\t\t\t\t\n\n\n\n\n\n\n\n\n\n\n                                                STATUS DO ATENDIMENTO");
        printf(YELLOW "\n\n\n                                                    EM ANDAMENTO");
        break;

    case '2' :
        system("cls");
        descricaoServicos();
        system("cls");
        telaNivelUm();
        break;

    default :
        printf("Valor Invalido");
        telaNivelUm();
        break;
    }

 getch();
 return 0;
}

int telaNivelDois()
{


 printf("\t\t\t\t\t\n\n\n\n\n\n\n  1 - RELATORIOS\t\t\t\t\t\n\n  2 - ORCAMENTO\t\t\t\t\t\n\n  3 - STATUS DO ATENDIMENTO\t\t\t\t\t\n\n  4 - NOSSOS SERVICOS\t\t\t\t\t\n\n  5 - LANCAMENTO DE NF");
 telaGeral();


 char op;
    op=getch();

    switch(op){
    case '1' :
        system("cls");
        printf("\t\t\t\t\t\n\n\n\n\n\n\n\n\n\n\n                                                STATUS DO ATENDIMENTO");
        printf(YELLOW "\n\n\n                                                    EM ANDAMENTO");
        break;

    case '2' :
        system("cls");
        orcamento();
        break;

    case '3' :
        system("cls");
        gerenciadorStatusAtendimento();
        break;

    case '4' :
        system("cls");
        consultaServicos();
        getch();
        system("cls");
        telaNivelDois();
        break;

    default :
        printf ("\n\nValor invalido!\n");
        system("pause");
        system("cls");
        telaInicial();
        break;
    }

 getch();
 return 0;
}

int telaNivelTres()
{
 printf("\t\t\t\t\t\n\n\n\n\n  1 - GERENCIAMENTO DE USUARIOS\t\t\t\t\t\n\n  2 - CADASTROS\t\t\t\t\t\n\n  3 - CALCULO DE ORCAMENTO\t\t\t\t\t\n\n  4 - STATUS DO ATENDIMENTO\t\t\t\t\t\n\n  5 - PRODUTOS EM ESTOQUE\t\t\t\t\t\n\n  6 - LANCAMENTO DE NF\t\t\t\t\t\n\n  7 - RELATORIOS");
 telaGeral();


  char op;
    op=getch();

    switch(op){
    case '1' :
        system("cls");
        printf("\t\t\t\t\t\n\n\n\n\n\n\n\n\n\n\n                                                STATUS DO ATENDIMENTO");
        printf(YELLOW "\n\n\n                                                    EM ANDAMENTO");
        break;

    case '2' :
        system("cls");
        printf("\t\t\t\t\t\n\n\n\n\n\n\n\n\n\n\n                                                  PRODUTOS EM ESTOQUE");
        printf(YELLOW "\n\n\n                                                ESTOQUE EM ATUALIZACAO");
        break;

    case '3' :
        system("cls");
        printf("\t\t\t\t\t\n\n\n\n\n\n\n\n\n\n\n                                                STATUS DO ATENDIMENTO");
        printf(YELLOW "\n\n\n                                                    EM ANDAMENTO");
        break;

    case '4' :
        system("cls");
        printf("\t\t\t\t\t\n\n\n\n\n\n\n\n\n\n\n                                                  PRODUTOS EM ESTOQUE");
        printf(YELLOW "\n\n\n                                                ESTOQUE EM ATUALIZACAO");
        break;

    case '5' :
        system("cls");
        printf("\t\t\t\t\t\n\n\n\n\n\n\n\n\n\n\n                                                STATUS DO ATENDIMENTO");
        printf(YELLOW "\n\n\n                                                    EM ANDAMENTO");
        break;

    case '6' :
        system("cls");
        printf("\t\t\t\t\t\n\n\n\n\n\n\n\n\n\n\n                                                  PRODUTOS EM ESTOQUE");
        printf(YELLOW "\n\n\n                                                ESTOQUE EM ATUALIZACAO");
        break;

    case '7' :
        system("cls");
        printf("\t\t\t\t\t\n\n\n\n\n\n\n\n\n\n\n                                                STATUS DO ATENDIMENTO");
        printf(YELLOW "\n\n\n                                                    EM ANDAMENTO");
        break;

    default :
        printf ("\n\nValor invalido!\n");
        system("pause");
        system("cls");
        telaInicial();
        break;
    }

 getch();
 return 0;
}
