#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>


int main(){
 // Declarando variaveis

int dataNascimento, telefone, cpf, numeroDiarias, dataChegada, dataSaida, consulta, dataConsulta, cpfconsulta, opcao;
char nome, endereco;

printf("SISTEMA POUSADA\n\n");

printf("O que deseja fazer:\n\n");
printf("1- Cadastrar reserva\n2- Consultar reserva\n");
scanf("%d", &opcao);


switch(opcao){
  // Caso queira cadastrar uma reserva
  case 1:
      if(opcao == 1){
        printf("Bem vindo a parte de Cadastro de Hospedes\n\n");

        printf("DADOS SOBRE O HOSPEDE\n\n");

        printf("Digite o nome completo do hospede:\n");
        scanf("%s", &nome);
        fflush(stdin);

        printf("Digite o CPF do hospede:\n");
        scanf("%s", &cpf);
        fflush(stdin);

        printf("Digite a data de nascimento do hospede: (xx/xx/xxxx)\n\n");
        scanf("%s", &dataNascimento);
        fflush(stdin);

         printf("Digite o endereco do hospede:\n");
        scanf("%s", &endereco);
        fflush(stdin);


        printf("DADOS SOBRE A DIARIA\n\n");
        printf("Numero de diarias:\n");
        scanf("%s", &numeroDiarias);
        fflush(stdin);

        printf("Data de chegada:(xx/xx/xxxx)\n");
        scanf("%s", &dataChegada);
        fflush(stdin);

        printf("Data de saida:(xx/xx/xxxx)\n");
        scanf("%s", &dataSaida);
        fflush(stdin);

        printf("Cadastramento concluido.");

      }

      // Caso queira consultar uma reserva no BD
  case 2:
     if(opcao == 2){
        printf("Bem vindo a parte de consultar reservas.\n\n");

        printf("Consultar Reserva pela:\n1- data\n2- CPF do hospede\n");
        scanf("%d", &consulta);

        if(consulta == 1){
            printf("Qual a data da chegada para consulta:(xx/xx/xxxx)\n");
            scanf("%s", &dataConsulta);
            printf("MOSTRA OS DADOS DAS RESERVAS NAQUELA DATA - SE HOUVER DADOS NO BANCO DE DADOS REFERENTE A DATA %s ", &dataConsulta);
            // se a data estiver qualquer reserva no banco de dados aparecerá os nomes dos hospedes hospedados na pousada
            // naquela data

        }
        if (consulta == 2){
            printf("Qual o CPF no hospede para consulta:\n");
            scanf("%s", &cpfconsulta);
            printf("MOSTRA OS DADOS DA RESERVA REFERENTE AO CPF %s- SE o CPF do hospede estiver no banco de dados", &cpfconsulta);
           // SE o CPF do hospede estiver no banco de dados aparecera os dados
        }

     }

}

}
