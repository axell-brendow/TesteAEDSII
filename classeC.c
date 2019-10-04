#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define bool      short
#define true      1
#define false     0
#define equals(a, b) (((strcmp(a, b) == 0) ? true : false))
#define NUMENTRADA 1000
#define TAMLINHA   1000

bool isFim(char* s){
   return (strlen(s) >= 3 && s[0] == 'F' && s[1] == 'I' && s[2] == 'M');
}


typedef struct Time {
	char* arquivo;
	char* nomeArquivo;
	char* nome;
	char* apelido;
	char* estadio;
	char* tecnico;
	char* liga;
	int capacidade;
	int fundacaoDia;
	int fundacaoMes;
	int fundacaoAno;
	long paginaTam;
}Time;

// void passStruct ( Time *time)

void lerArquivo (char* filename, Time *time)
{
	FILE* arquivo = fopen(filename,"rt");
	char linha[30000];
        fseek(arquivo,0,SEEK_SET);
        do
	{
		fgets(linha,30000,arquivo);
                printf("\n%s", linha);	
	}while ( !feof(arquivo)  );
	//printf ("\n%s", linha);
	time->paginaTam = ftell(arquivo);
	fclose(arquivo);
}

void main ()
{
	char linha[NUMENTRADA][TAMLINHA];
	char linha2[NUMENTRADA][TAMLINHA];
	Time time;
	char* nome = "";
	int numEntrada = 0;
	int numEntrada2 = 0;
	
	do{

        printf("\nTA FUNCIONANDO");
		fgets(linha[numEntrada], TAMLINHA, stdin);
	}while(isFim(linha[numEntrada++]) == false);
	numEntrada--;

        printf("\nADOASOOAGSOA");
	/*for ( int x = 0; x < numEntrada; x++ )
	{
	printf("%s",linha[x]);
	}*/

	lerArquivo(linha[0], &time);
}
