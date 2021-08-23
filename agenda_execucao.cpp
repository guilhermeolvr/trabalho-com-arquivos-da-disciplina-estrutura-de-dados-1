#include <conio.h>
#include <windows.h>
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "agenda.c"

int main (){
  struct agenda contatos[100];
  int op=0;
  contatos[0].tam=0;
  system("color 70");
  
 

  system ("cls");
  printf("\n");
  printf("||------------------------------------|| \n");
  printf("    Bem vindo selecione uma opcao");
  printf("||------------------------------------|| \n");
  printf(" | Inserir contato :  1| \n");
  printf(" | Excluir contato :  2| \n");
  printf(" | Alterar contato :  3| \n");
  printf(" | Pesquisar contato :4| \n");
  printf(" | Exibir contato :   5| \n");
  printf(" | Estado da Agenda : 6| \n");
  printf(" | Sair :             0| \n\n");
  printf(" opcao: ");
  scanf("%i", &op);
switch(op)
{
  case 0:
  printf("Agenda finalizada \n");
  break;
  case 1:
  cadastro(contatos);
  break;
  case 2:
  excluircontatos(contatos);
  break;
  case 3:
  alterarcontatos(contatos);
  break;
  case 4:
  pesquisarcontatos(contatos);
  break;
  case 5:
  exibircontatos(contatos);
  break;
  case 6:
  statusagenda(contatos);
  break;
  
  default:
  printf("opcao invalida");
  break;
}


return 0;
}

