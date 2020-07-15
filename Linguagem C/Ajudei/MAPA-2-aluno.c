#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Contato {
        int id;
        char nome[30], telefone[15], email[30];
};

int main(){
        int op = 3, cont = 0, i;
        struct Contato cliente[5];
        do{
        setlocale(LC_ALL, "portuguese");
        printf("               MENU               \n");
        printf("[Digite 1]- Inserir novo cadastro \n");
        printf("[Digite 2]- Mostrar todos os cadastros \n");
        printf("[Digite 0]- Encerrar programa\n");
        scanf("%d",&op);
        fflush(stdin);
        system("cls");
        switch(op){
            case 1:
                if(cont < 5){
                    printf("Cadastro de contato \n");
                    printf("Código: %d \n",cont + 1);
                    printf("Informe o Nome: ");
                    gets(cliente[cont].nome);
                    fflush(stdin);
                    printf("Informe o Telefone: ");
                    gets(cliente[cont].telefone);
                    fflush(stdin);
                    printf("Informe o E-mail: ");
                    gets(cliente[cont].email);
                    fflush(stdin);
                    system("cls");
                    cont ++;
                 }else{
                     system("cls");
                     printf("Agenda Lotada!\n\n");
                     system("pause");
                 }

            break;
            case 2:
                system("cls");
                if(cont == 0){
                    printf("Agenda vazia!\n");
                    printf("\n");
                }else{
                    printf("Listar Contatos \n");
                    for(i = 0; i<cont; i++){
                        printf("Código: %d \n",i + 1);
                        printf("Nome: %s \n",cliente[i].nome);
                        printf("Telefone: %s \n",cliente[i].telefone);
                        printf("E-mail: %s \n\n",cliente[i].email);
                    }
                 }
            break;
            case 0:
                system("cls");
                printf("Encerrando... \n");
            break;
            default:
                printf("Erro: Opção Inválida!");
        }

    }while(op != 0);
    return(0);
    system("pause");
}