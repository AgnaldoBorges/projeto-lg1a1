 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 #include <string.h> 
 #include <conio.h>

int main () {
 	
 	
 	// Declaração de variaveis
 	srand(time(NULL));// aleatório de verdade
 int quantidade, indice=12, ander[3] , quantidadeoriginal , tamanho, aleatoriopremio=rand() % (11)+1,   aleatorio=rand() % (17)+1;
 float jogador[3]= {0,0,0}, premio[12];
char  pista2[20], palavras[100], letra[1000];
char vetorpalavra[3][100];
int rodada=1;

char palavrafinal[3][3][20];
	// Declaração de variaveis
	
	
FILE *arq2; // abertura arquivo com premios
 arq2 = fopen ("premios.txt", "r");
 if (arq2 == NULL ) {// informará caso o arquivo não tenha sido aberto
 printf ( "Problemas na ABERTURA do a r q u i v o \n" ) ;
  }
 for (indice=12; indice>0; indice--) {// lerá os valores dos premios
 	 fscanf(arq2, "%f", &premio[indice]);
 } 

 fclose (arq2);
 // fechamento arquivo com premios
	
	


// abertura arquivo com palavras
 FILE *arq; 
 arq = fopen ("palavras.txt", "r") ;
 if (arq == NULL ) {// informará caso o arquivo não tenha sido aberto
 printf ( "Problemas na ABERTURA do a r q u i v o \n" ) ;
  }
while(aleatorio>1)
 {
fgets(palavras, 100, arq);
aleatorio--;
}
fscanf(arq, "%s", &pista2);
fscanf(arq, "%d", &quantidade); // vai ler a quantidade de palavras sorteadas
quantidadeoriginal=quantidade;
for(quantidade=quantidade; quantidade>0; quantidade--){ // vai ler as palavras sorteadas
fscanf(arq, "%s", &vetorpalavra[quantidade]);
}
quantidade=quantidadeoriginal;

 fclose ( arq ); // fechamento arquivo com palavras
 
  
 
char pista[20];

strcpy(pista, pista2);
 
 	
printf("\n");
quantidade=quantidadeoriginal;

 
 
int zerador=0;
int letraauxiliar=0;
int fim=0;
int vetortela [3][20]; // vetor para auxiliar a impressão na tela 


  while (quantidade>=0){ // o vetor tela deve receber o valor e, caso o jogador acerte a letra, seu valor passará para 1
  	
  	zerador=0;
  	while (zerador<20){
	  vetortela[quantidade][zerador]=0;
	  zerador++;
	  }
	  quantidade--;
  }
  
    
  int soma; // vai auxiliar na somatória dos valores
zerador=0;
quantidade=quantidadeoriginal;
int jogadorcontador=1;
int total=0, totalauxiliar=0; //  ajudará a auxiliar no controle de quantas palavras faltam



while (quantidade>=0){ // calcula a quantidade de letras das palavras sorteadas
	total=total+strlen(vetorpalavra[quantidade]);
	quantidade--;
}
quantidade=quantidadeoriginal;



//inicio loop jogo
while (fim!=1000){
	
	
	if(jogadorcontador==4){ // if para contralar o vetor dos jogador o valor dos jogadores passe de 3
jogadorcontador=1;	
} 

 
soma=0;
zerador=0;


  	printf(" \n  \n \n \n \n \n                      Rodada do Jogador %d", jogadorcontador);
  	printf("\n");
printf(" \n                A pista e %s \n", pista);
  
for(quantidade=quantidadeoriginal; quantidade>0; quantidade--){ 	//irá imprimir na tela as palavras com o auxilio do vetor que originalmente é zero, mas quando os jogadores acertam a letra, o seu valor virá um e a respectiva letra é impressa na tela
	ander[quantidade]=strlen(vetorpalavra[quantidade]);
	zerador=0;
		printf("            ");
			while(ander[quantidade]>0){
	 
		if(vetortela[quantidade][zerador]==1){
				
		printf(" %c ", vetorpalavra[quantidade][zerador]);	
		zerador++;
			}
		else	{	
		printf(" _ ");
		
			zerador++;
			}	
			ander[quantidade]--;
			
	}

	printf("\n");
	

	}
printf(" \n  \n");
printf("Jogador 1           Jogador 2       Jogador 3 \n");
printf("=========           =========       ======== \n");
printf("%f             %f        %f    \n", jogador[1], jogador[2], jogador[3]);
	printf( "RODE A RODA! (APERTE ENTER PARA RODAR) \n");



	aleatoriopremio=rand() % (11)+1;
 char enter = getch(); // esperará um enter do usuário
	if (premio[aleatoriopremio]==0){// caso o valor sorteado seja 0,00, o jogador perderá tudo
		printf( "\n \n Perdeu Tudo");
		jogador[jogadorcontador]=0;
		jogadorcontador++;
		
	}
	
		if (premio[aleatoriopremio]!=0 && premio[aleatoriopremio]<1){// caso o valor sorteado seja 0,01, o jogador perderá a vez
		printf( "\n \n Passou  a Vez\n \n");
		jogadorcontador++;
		
	}
	
	if (premio[aleatoriopremio]>1){ // 
		
	
   printf( "Uma letra por %f: ", premio[aleatoriopremio]);
 
 zerador=0;
 quantidade=quantidadeoriginal;
letraauxiliar=0;


while (quantidade>0){   // irá verificar se uma letra foi digitada

quantidade=quantidadeoriginal;
zerador=0;
fim=1;

while ( zerador<=0) { 
printf("\n");
letra[letraauxiliar] = getchar();

if (// irá verificar se uma letra maiuscula ou minuscula foi digitada
letra[letraauxiliar]== 'a' || letra[letraauxiliar]== 'b' || letra[letraauxiliar]== 'c' || letra[letraauxiliar]== 'd' || 
letra[letraauxiliar]== 'e'  || letra[letraauxiliar]== 'f'  || letra[letraauxiliar]== 'g'|| letra[letraauxiliar]== 'h' ||
letra[letraauxiliar]== 'i' || letra[letraauxiliar]== 'j' || letra[letraauxiliar]== 'k' || letra[letraauxiliar]== 'l' || 
letra[letraauxiliar]== 'm' || letra[letraauxiliar]=='n' || letra[letraauxiliar]== 'o' || letra[letraauxiliar]== 'p' || 
letra[letraauxiliar]== 'q' || letra[letraauxiliar]== 'r' || letra[letraauxiliar]== 's' || letra[letraauxiliar]== 't' ||
letra[letraauxiliar]== 'u' || letra[letraauxiliar]== 'v' || letra[letraauxiliar]== 'w' || letra[letraauxiliar]== 'x' ||
letra[letraauxiliar]== 'y' || letra[letraauxiliar]== 'z' || letra[letraauxiliar]== 'A' || letra[letraauxiliar]== 'B' || 
letra[letraauxiliar]== 'C'  || letra[letraauxiliar]== 'D' || letra[letraauxiliar]== 'E' || letra[letraauxiliar]== 'F' || 
letra[letraauxiliar]== 'G' || letra[letraauxiliar]== 'H' || letra[letraauxiliar]== 'I' || letra[letraauxiliar]== 'J' ||
letra[letraauxiliar]== 'K' || letra[letraauxiliar]== 'L' || letra[letraauxiliar]== 'M' || letra[letraauxiliar]== 'N' || 
letra[letraauxiliar]== 'O' || letra[letraauxiliar]== 'P' || letra[letraauxiliar]== 'Q' || letra[letraauxiliar]== 'R' || 
letra[letraauxiliar]== 'S' || letra[letraauxiliar]== 'T' || letra[letraauxiliar]== 'U' || letra[letraauxiliar]== 'V' || 
letra[letraauxiliar]== 'W' || letra[letraauxiliar]== 'X' || letra[letraauxiliar]== 'U' || letra[letraauxiliar]== 'Z' ){
 	 zerador=1;
 	 letraauxiliar++;
 }

}


	 
zerador=0;
quantidade=quantidadeoriginal;
letraauxiliar--;



while (quantidade>0 && fim!=0){ //fará a verificação das palavras com as letra digitada
	zerador=0;
	ander[quantidade]=strlen(vetorpalavra[quantidade]);
	while (ander[quantidade]>0 && fim!=0){
		
	if(letra[letraauxiliar]==vetorpalavra[quantidade][zerador]){
		
		vetortela[quantidade][zerador]=vetortela[quantidade][zerador] + 1;
	soma++;

	
		
	}
	if (vetortela[quantidade][zerador]>1)
	{printf ("\n A letra ja foi digitada %c \n ", letra[letraauxiliar]);
	fim=0;
	vetortela[quantidade][zerador]= 1;
	}
	zerador++;
	ander[quantidade]--;	
	
	}
quantidade--;	
}



}
quantidade=quantidadeoriginal;
zerador=0;


if(soma==0){// verificará se alguma letra faz parte do rol de palavras
	printf("Nao Existe a letra %c", letra[letraauxiliar]);
	jogadorcontador++;
	if(jogadorcontador==4){
jogadorcontador=1;	
}  
	printf("\n A vez será passada ao jogador %d", jogadorcontador);
}
if(soma>0){
    totalauxiliar=totalauxiliar+soma;
	jogador[jogadorcontador]=jogador[jogadorcontador]+(premio[aleatoriopremio]*soma);
}


}
rodada++;
// quando faltarem 3 ou menos palavras
zerador=0;



int verificador=total-totalauxiliar;


if (verificador<=3)  // verificará se faltam 3 ou menos palavras e, se o caso, as receberá no teclado
{
int contador=1;
for (contador=1; contador<=3; contador++) {
if (contador>1)  // caso o primeiro jogador erre a palavra
{
	aleatoriopremio=rand() % (11)+1;
	jogador[jogadorcontador]=jogador[jogadorcontador]+(premio[aleatoriopremio]*soma);
}

quantidade=quantidadeoriginal;

printf(" \n  \n");
printf(" \n  \n");
printf(" \n  \n");
printf("Jogador 1           Jogador 2       Jogador 3 \n");
printf("=========           =========       ======== \n");
printf("%f             %f        %f    \n", jogador[1], jogador[2], jogador[3]);
	
	
for(quantidade=quantidadeoriginal; quantidade>0; quantidade--){ 	//irá imprimir na tela as palavras com o auxilio do vetor que originalmente é zero, mas quando os jogadores acertam a letra, o seu valor virá um e a respectiva letra é impressa na tela
	ander[quantidade]=strlen(vetorpalavra[quantidade]);
	zerador=0;
		printf("            ");
			printf("\n");
			while(ander[quantidade]>0){
	 
		if(vetortela[quantidade][zerador]==1){
				
		printf(" %c ", vetorpalavra[quantidade][zerador]);	
		zerador++;
			}
		else	{	
		printf(" _ ");
		
			zerador++;
			}	
			ander[quantidade]--;
			
			
	}
}



	quantidade=quantidadeoriginal;
	printf("\n");
printf ("\n  Jogador %d: Faltam %d letras para completar a palavra", jogadorcontador, verificador);

printf ("\n  Voce tem 5 segundos para pensar e depois digitar a palavra...5...4...3...2...1...");
quantidade=quantidadeoriginal;
while ( quantidade>0){
printf ("\n  Valendo R$ %f, a palavra(%d) eh: _", jogador[jogadorcontador], quantidade);
scanf ("%s", &palavrafinal[jogadorcontador][quantidade]);
getchar();
quantidade--;
}


quantidade=quantidadeoriginal;
zerador=0;



while(quantidade>0) // fará a verificação final das palavras digitadas
{
	
	
if (strcmp(palavrafinal[jogadorcontador][1],vetorpalavra[1])==0 || strcmp(palavrafinal[jogadorcontador][1],vetorpalavra[2])==0 || strcmp(palavrafinal[jogadorcontador][1],vetorpalavra[3])==0)	// verificará se a palavra digitada é uma das sorteadas
{
	
zerador++;
quantidade--;
}
else quantidade--;
if ( quantidade>0 & (strcmp(palavrafinal[jogadorcontador][2],vetorpalavra[1])==0 || strcmp(palavrafinal[jogadorcontador][2],vetorpalavra[2])==0 || strcmp(palavrafinal[jogadorcontador][2],vetorpalavra[3])==0)) // verificará se a palavra digitada é uma das sorteadas
{
zerador++;
quantidade--;
}
else quantidade--;
if  ( quantidade>0 & (strcmp(palavrafinal[jogadorcontador][3],vetorpalavra[1])==0 || strcmp(palavrafinal[jogadorcontador][3],vetorpalavra[2])==0 || strcmp(palavrafinal[jogadorcontador][3],vetorpalavra[3])==0))// verificará se a palavra digitada é uma das sorteadas
{
zerador++;
quantidade--;
}
else quantidade--;

if (zerador==quantidadeoriginal)// encerrará o jogo
{
contador=4;
fim=1000;

printf(" \n                A pista e %s \n", pista);
for(quantidade=quantidadeoriginal; quantidade>0; quantidade--){
	ander[quantidade]=strlen(vetorpalavra[quantidade]);
	zerador=0;
			while(ander[quantidade]>0){
		printf(" %c ", vetorpalavra[quantidade][zerador]);	
				zerador++;
			ander[quantidade]--;
			
	}
	printf("\n");
	
	}
	printf(" \n  \n");
  	printf(" \n  \n                 Rodada do Jogador %d", jogadorcontador);
printf(" \n                A pista e %s \n", pista);

printf("Jogador 1           Jogador 2       Jogador 3 \n");
printf("=========           =========       ======== \n");
printf("%f             %f        %f    \n", jogador[1], jogador[2], jogador[3]);
if (jogadorcontador==1)
printf("   Vencendor \n");
if (jogadorcontador==2)
printf("                Vencendor    \n");
if (jogadorcontador==3)
printf("                                      Vencendor \n");
	printf("\n");
	printf ("fim jogo");
	return 0;
	
}



}

jogadorcontador++;
quantidade=quantidadeoriginal;
zerador=0;


if(jogadorcontador==4) //caso o contador passe de quatro
jogadorcontador=1;
}
printf ("Nenhum jogador acertou a(s) palavras");
return 0; // caso ninguém acerte a palavra, essa linha finalizará o programa
}




}
 return 0;
 
 }

