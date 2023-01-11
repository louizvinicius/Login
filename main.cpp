#include <iostream>
#include <string.h>
#include <stdio.h>
	
	char login[10];
	char senha[10];
	char nome[10];
	
void tela(){
	
	int i;
	
	printf("\n****************************************");
	
printf("\n\t**HELLO WORLD**\n");

	printf("\n\tEscolha sua opçao:\n");

do{
	printf("\n    (1) Cadastro    ");
	printf("(2) Login\n");
		scanf("%d",&i);
	
} while((i<1) || (i>2));
	switch(i){
		
		case 1:
			void cadastro();
			break;
			
		case 2:
			void login();
			break;
			
		default:
			printf("Opcao invalido!");

	}
	printf("\n****************************************");
}

void cadastro(){
	
	printf("\n\t**CADASTRO**\n");
	
printf("Nome: ");
	scanf("%s",&nome);
	
printf("Crie seu login: ");
	scanf("%s",&login);
	
	printf("Crie sua senha: ");
		scanf("%s",&senha);
	
	printf("\n\t**CADASTRO CONCLUIDO**\n");
	
	return tela();
}

void login1(){

	char login1[10];
	char senha1[10];
	int login_efetuado = 0;
	
printf("\n**LOGIN**\n");
	
	while(!login_efetuado){
		
	printf("Login: ");
	scanf("%s",&login1);
	
	printf("Senha: ");
		scanf("%s",&senha1);
		
			
			if(strcmp(login,login1) == 0 && strcmp(senha,senha1) == 0){
				
				printf("\n\t**Seja Bem Vindo %s!",nome);
					login_efetuado=1;
			
			}else{
				printf("\n\t**DADOS INCORRETOS!\n**");
			}
			
		}
}

int main() {

	tela();
	cadastro();
	login1();
	return 0;
}