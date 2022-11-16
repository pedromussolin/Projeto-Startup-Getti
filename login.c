#include "header.h"

#define ENTER 13
#define BACKSPACE 8
#define SPACE 32
#define TAB 9
#define ESC 27

int loginAdmin()
{
 char ch = '\0';
 char vuser[20],user[20],vsenha[20],senha[20];
 int ctecla=0;

 strcpy(user,"admin"); /*Usu�rio correto*/
 strcpy(senha,"admin"); /*Senha correta*/

 memset(vuser, '\0', sizeof(vuser));
 memset(vsenha, '\0', sizeof(vsenha));

 printf("Usuario: ");
 scanf("%s", vuser);
 printf("Senha: ");

 while(ctecla<5)
 {
   ch = getch();

   switch(ch)
   {
    case BACKSPACE:
     if(ctecla>0)
     {
      fflush(stdin);
      putch(BACKSPACE);
      ch = '\0';
      vsenha[ctecla] = ch;
      ctecla--;
      putch(SPACE);
      putch(BACKSPACE);
     }
      break;
    case TAB:
     putch(TAB);
     ctecla = 5;
     break;
    case ENTER:
     putch(ENTER);
     ctecla = 5;
     break;
    default:
     vsenha[ctecla] = ch;
     putch('*');
     ctecla++;
     break;
   }
 }

 if(strcmp(user,vuser)==0 && strcmp(senha,vsenha)==0)
 {
   printf("\n\nAcesso permitido!");
 }
 else
 {
   printf("\n\nAcesso negado!\n");
   system("pause");
   system("cls");
   loginAdmin();
 }

 return 0;
}

int loginNivelUm()
{
char ch = '\0';
char vuserLoginUm[20],userLoginUm[20],vsenhaLoginUm[20],senhaLoginUm[20];
int ctecla=0;

 strcpy(userLoginUm,"pedro"); /*Usu�rio correto*/
 strcpy(senhaLoginUm,"pedro"); /*Senha correta*/

 memset(vuserLoginUm, '\0', sizeof(vuserLoginUm));
 memset(vsenhaLoginUm, '\0', sizeof(vsenhaLoginUm));

 printf("Usuario: ");
 scanf("%s", vuserLoginUm);
 printf("Senha: ");

 while(ctecla<5)
 {
   ch = getch();

   switch(ch)
   {
    case BACKSPACE:
     if(ctecla>0)
     {
      fflush(stdin);
      putch(BACKSPACE);
      ch = '\0';
      vsenhaLoginUm[ctecla] = ch;
      ctecla--;
      putch(SPACE);
      putch(BACKSPACE);
     }
      break;
    case TAB:
     putch(TAB);
     ctecla = 5;
     break;
    case ENTER:
     putch(ENTER);
     ctecla = 5;
     break;
    default:
     vsenhaLoginUm[ctecla] = ch;
     putch('*');
     ctecla++;
     break;
   }
 }

 if(strcmp(userLoginUm,vuserLoginUm)==0 && strcmp(senhaLoginUm,vsenhaLoginUm)==0)
 {
   printf("\n\nAcesso permitido!");
 }
 else
 {
   printf("\n\nAcesso negado!\n");
   system("pause");
   system("cls");
   loginNivelUm();
 }

 return 0;
}

int loginNivelDois()
{
 char ch = '\0';
 char vuserLoginDois[20],userLoginDois[20],vsenhaLoginDois[20],senhaLoginDois[20];
 int ctecla=0;

 strcpy(userLoginDois,"rogerio"); /*Usu�rio correto*/
 strcpy(senhaLoginDois,"rogerio"); /*Senha correta*/

 memset(vuserLoginDois, '\0', sizeof(vuserLoginDois));
 memset(vsenhaLoginDois, '\0', sizeof(vsenhaLoginDois));

 printf("Usuario: ");
 scanf("%s", vuserLoginDois);
 printf("Senha: ");

 while(ctecla<7)
 {
   ch = getch();

   switch(ch)
   {
    case BACKSPACE:
     if(ctecla>0)
     {
      fflush(stdin);
      putch(BACKSPACE);
      ch = '\0';
      vsenhaLoginDois[ctecla] = ch;
      ctecla--;
      putch(SPACE);
      putch(BACKSPACE);
     }
      break;
    case TAB:
     putch(TAB);
     ctecla = 7;
     break;
    case ENTER:
     putch(ENTER);
     ctecla = 7;
     break;
    default:
     vsenhaLoginDois[ctecla] = ch;
     putch('*');
     ctecla++;
     break;
   }
 }

 if(strcmp(userLoginDois,vuserLoginDois)==0 && strcmp(senhaLoginDois,vsenhaLoginDois)==0)
 {
   printf("\n\nAcesso permitido!");
 }
 else
 {
   printf("\n\nAcesso negado!\n");
   system("pause");
   system("cls");
   loginNivelDois();
 }

 return 0;
}

int loginNivelTres()
{
 char ch = '\0';
 char vuserLoginTres[20],userLoginTres[20],vsenhaLoginTres[20],senhaLoginTres[20];
 int ctecla=0;

 strcpy(userLoginTres,"caio"); /*Usu�rio correto*/
 strcpy(senhaLoginTres,"caio"); /*Senha correta*/

 memset(vuserLoginTres, '\0', sizeof(vuserLoginTres));
 memset(vsenhaLoginTres, '\0', sizeof(vsenhaLoginTres));

 printf("Usuario: ");
 scanf("%s", vuserLoginTres);
 printf("Senha: ");

 while(ctecla<4)
 {
   ch = getch();

   switch(ch)
   {
    case BACKSPACE:
     if(ctecla>0)
     {
      fflush(stdin);
      putch(BACKSPACE);
      ch = '\0';
      vsenhaLoginTres[ctecla] = ch;
      ctecla--;
      putch(SPACE);
      putch(BACKSPACE);
     }
      break;
    case TAB:
     putch(TAB);
     ctecla = 4;
     break;
    case ENTER:
     putch(ENTER);
     ctecla = 4;
     break;
    default:
     vsenhaLoginTres[ctecla] = ch;
     putch('*');
     ctecla++;
     break;
   }
 }

 if(strcmp(userLoginTres,vuserLoginTres)==0 && strcmp(senhaLoginTres,vsenhaLoginTres)==0)
 {
   printf("\n\nAcesso permitido!");
 }
 else
 {
   printf("\n\nAcesso negado!\n");
   system("pause");
   system("cls");
   loginNivelTres();
 }

 return 0;
}
