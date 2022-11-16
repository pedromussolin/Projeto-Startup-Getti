#include "header.h"
#include "telas.h"

int consultaServicos()
{

 system("cls");
 printf("\t\t\t\t\t\n\n\n\n\n  1 - INFRAESTRUTURA / HARDWARES");
 printf("\t\t\t\t\t\n\n  2 - CIBERSEGURANCA / ANTIVIRUS");
 printf("\t\t\t\t\t\n\n  3 - SERVICOS (ADEQUACAO A LGPD)");
 printf("\t\t\t\t\t\n\n  4 - NUVEM");
 printf("\t\t\t\t\t\n\n  5 - LOCACAO DE MAQUINAS");
 printf("\t\t\t\t\t\n\n  6 - RESULTADO DO ORCAMENTO");
 printf("\t\t\t\t\t\n\n  7 - VOLTAR");

 telaGeral();

return 0;
}

int orcamento()
{
    char op, continua[4];
    float resultado;
    int i;
    float precos[] = {500, 750, 550, 1500};

    system("cls");
    consultaServicos();
    printf("\n\nQual item deseja adicionar ao carrinho?");
    op = getch();

    strcpy(continua,"6");
    while(strcmp(continua,"6")==0){
       switch(op){

        case '1':
            resultado = resultado + precos[0];
            system("cls");
            orcamento();
            break;

        case '2':
            resultado = resultado + precos[1];
            system("cls");
            orcamento();
            break;

        case '3':
            resultado = resultado + precos[2];
            system("cls");
            orcamento();
            break;

        case '4':
            resultado = resultado + precos[3];
            system("cls");
            orcamento();
            break;

        case '5':
            system("cls");
            orcamento();
            break;

        case '6':
            system("cls");
            printf("O calculo do seu orcamento resultou no valor: R$ %.2f\n\n", resultado );
            system("pause");

        case '7':
            system("cls");
            telaNivelDois();
            break;

        default :
            printf ("\n\nValor invalido!\n");
            system("pause");
            system("cls");
            orcamento();
            break;
        }
    }

 return 0;
}

int descricaoServicos()
{
    system("cls");
    printf("\t\t\t\t\t\n\n  1 - INFRAESTRUTURA / HARDWARES\n\n--------------------------------------------------------------------------------------------------------------\n\n");
    printf("  # Desde equipamentos de redes, ate sistemas e instalacoes que possibilitam o gerenciamento das solucoes por parte do \n  T.I;\n\n");
    printf("  # Hardwares;\n\n  # Plataformas de comunicacao e redes;\n\n");
    printf("  # Monitoramento e gerenciamento de rede, softwares e aplicativos, sistemas operacionais, gestao de armazenamento de \n  dados, entre outros;\n\n");
    printf("\t\t\t\t\t\n\n  2 - CIBERSEGURANCA / ANTIVIRUS\n\n--------------------------------------------------------------------------------------------------------------\n\n");
    printf("  # Protecao de maquinas, servidores e rede independente do sistema operacional utilizado utilizando antivirus de ultima\n  geracao;\n\n");
    printf("  # EDR (Endpoint Detection and Response);\n\n  # Firewalls de ultima geracao;\n\n");
    printf("  # Protecao para dispositivos moveis, sistemas eletronicos, redes e dados contra ataques maliciosos;\n\n");
    printf("\t\t\t\t\t\n\n  3 - SERVICOS (ADEQUACAO A LGPD)\n\n--------------------------------------------------------------------------------------------------------------\n\n");
    printf("  # Atuamos com todo o processo de adequacao da organizacao a Lei Federal nº 13.709/2018 (Lei Geral de Protecao de Dados\n  Pessoais, LGPD);\n\n");
    printf("  # Adequacao juridica e tecnica;\n\n");
    printf("  # Diagnostico dos processos, estrutura fisica e logica, politicas de segurança de informacoes e apontamento do seu\n  nivel de conformidade;\n\n");
    printf("  # Boas praticas do mercado;\n\n");
    printf("\t\t\t\t\t\n\n  4 - NUVEM\n\n--------------------------------------------------------------------------------------------------------------\n\n");
    printf("  # Atuamos com migracao ambiente e espaco em nuvem;\n\n");
    printf("  # Gestao do servico;\n\n");
    printf("  # Englobamos os mais importantes fornecedores globais de Nuvem, solucoes pre-configuradas de Cloud;\n\n");
    printf("  # Servicos tecnicos complementares, manutencao e gerenciamento;\n\n");
    printf("\t\t\t\t\t\n\n  5 - LOCACAO DE MAQUINAS\n\n--------------------------------------------------------------------------------------------------------------\n\n");
    printf("  # Dispositivos moveis, notebook, desktop, servidores, roteadores e impressoras;\n\n");
    printf("  # Locacao adaptada as necessidades exclusivas para o seu negocio;\n\n");
    printf("  # Suporte total e servicos de reparos ou substituicao;\n\n");
    printf("  # Configuracao e implementacao de S.O.;\n\n");

    system("pause");

return 0;
}
