#include <ctype.h>
#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <fstream>
#include <time.h>
#include "agenda.h"

 
void statusagenda(struct agenda pt[0])
{
   printf("\n----------status da agenda -----------\n\n\n");

   printf("quantidade maxima de contatos: 100 \n");
   printf("\n contatos cadastrados: %i",pt[0].tam);
   system("PAUSE");

}





void pesquisarcontatos(struct agenda pt[])
{
  char verific[100], o = 's';
  int i,k;

  printf("\n---------- pesquisar contatos  -----------\n\n\n");

while((0=='s')||(o == 's'))
{
printf("informe o nome de usuario:");

fflush(stdin);
fgets(verific,99,stdin);


for(i=0;i<strlen(verific);i++)
{
  if((verific[i]>='a')&& (verific[1<='z']))
  {
    verific[i]-=32;
  }
}
for (i=0;i<pt[o].tam;i++)
{
  k = strcmp(verific,pt[i].nome);
  if (k==0)
  {
    printf("\n");
    printf("contato: %s", pt[i].nome);
    printf("telefone: %s", pt[i].telefone);
    printf("celular: %s", pt[i].celular);
    printf("\n");
    break;
  }
}
if (k!=0)
printf ("\n contato nao existe \n");
}
}






void exibircontatos (struct agenda pt[])
{
 int i;

 printf("\n---------- exibir lista de contatos  -----------\n\n\n");

 for(i=0;i<pt[0].tam;i++)
 {
   printf("\n");
    printf("contato: %s", pt[i].nome);
    printf("telefone: %s", pt[i].telefone);
    printf("celular: %s", pt[i].celular);
    printf("\n");
 }
system("PAUSE");

}










void cadastro(struct agenda pt[])
{
char x='s',verific[100];
int i,y=-1,j;
 
 printf("\n---------- Cadastro de contato -----------\n\n\n");

 while ((x=='s') || (x=='s'))
 {
 printf("digite o nome do contato que será cadastrado");
 fflush(stdin);
 fgets(verific,99,stdin);
 

 for (i=0; i<pt[0].tam; i++)
{
  y=strcmp(verific,pt[i].nome);
  if(y==0)
  {
    printf("impossivel cadastrar, usuario ja cadastrado!");
    break;
  }
}
if(y!=0)
{
  for(i=0; i<pt[0].tam; i++)
  {
    if(verific[0]<pt[i].nome[0])
    break;
  }
}
for (j=pt[0].tam;j>=i;j--)

{
  strcpy(pt[j].nome,pt[j-1].nome);
  strcpy(pt[j].telefone,pt[j-1].telefone); 
  strcpy(pt[j].celular,pt[j-1].celular);

}

strcpy(pt[i].nome,verific);
printf("digite o telefone do novo contato");
fflush(stdin);
fgets((pt[i]).telefone,16,stdin);
fflush(stdin);
fgets((pt[i]).celular,16,stdin);
printf("\n");
pt[0].tam++;
printf ("\ncadastro efetuado com sucesso\n");


}
}






void alterarcontatos(struct agenda pt[])
{
  char verific [100];
  int i,k;
  printf("\n");
  printf("||----------------------------------|| \n");
  printf("||-------alteracao de contatos------|| \n");
  printf("||----------------------------------|| \n");
  printf("Informe o nome do usuario: ");

  fflush(stdin);
  fgets(verific,99,stdin);

  for(i=0;i<strlen(verific);i++)
  {
    if((verific[i]>='a') && (verific[i]<='z'))
    {
      verific[i]-=32;
    }
  }
 for(i=0;i<pt[0].tam;i++)
 {
   k=strcmp(verific,pt[i].nome);
   if(k==0)
   {
     printf("\n");
     printf(" Contato   :%s" ,pt[i].nome);
     printf("Telefone :%s", pt[i].telefone);
     printf("Celular :%s",pt[i].celular);
     printf("\n");
     printf("Informe o novo numero de telefone : ");
     fflush(stdin);
     fgets(pt[i].telefone,9,stdin);
     printf("Informe o novo numero de celular : ");
     fflush(stdin);
     fgets(pt[i].celular,9,stdin);
     k=0;
     break;
   }
 }
if(k!=0)
{
  printf("\n");
  printf("Contato nao cadastrado \n");
}
printf("\n\n");
system("PAUSE");
}







void excluircontatos(struct agenda pt[])
{
  char verific[100];
  int k,i,j;
  char b;
  printf("\n");
  printf("||---------------------------------------|| \n");
  printf("||----------exclusao de contatos---------|| \n");
  printf("||---------------------------------------||\n\n");
  printf("Informe o nome do usuario: ");
  fflush(stdin);
  fgets(verific,99,stdin);

  for(i=0;i<strlen(verific);i++)
  {
    if((verific[i]>='a') && (verific[i]<='z'))
    {
      verific[i]-=32;
    }
  }
for(i=0;i<=pt[0].tam;i++)
{
  k=strcmp(verific,pt[i].nome);
  if(k==0)
  {
    printf("\n");
    printf("Contato   :%s" ,pt[i].nome);
    printf("Telefone  :%s" ,pt[i].telefone);
    printf("Celular   :%s" ,pt[i].celular);
    break;
  }
}
if(k==0)
{
  printf("\n");
  printf("Deseja realmente exclcuir o contato?(S/N): ");
  scanf("%c",&b);
  
  if((b=='s') || (b=='S'))
  {
    for(j=i;j<pt[0].tam;j++)
    {
      strcpy(pt[j].nome,pt[j+1].nome);
      strcpy(pt[j].telefone,pt[j+1].telefone);
      strcpy(pt[j].celular,pt[j+1].celular);
      }
    pt[0].tam-=1;
    printf("\n");
    printf("usuario excluido com sucesso \n\n");  
  }
}
else
{
  printf("Usuario nao cadastrado \n");
}
system("PAUSE");
}
