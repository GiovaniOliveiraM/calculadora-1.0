#include <stdio.h>
#include <locale.h>
main (){
 //char para cada caracteres
 //int para numeros inteiros
 //float numeros com virgula
 //double numeros com virgula
//amos = a palavra "soma" ao contrario
//gorila = a variavel tinha que ter um nome
 setlocale(LC_ALL, "Portuguese");

int letras, gorila, amos, resposta;

 do {
printf("Digite um número: ");
scanf ("%d", &letras);
printf("Digite outro número: ");
scanf ("%d", &gorila);
amos = letras + gorila;
printf("O resultado é %d\n", amos);

printf("Digite 1 para Sair e 2 para Continuar\nDigite: ");
scanf("%d", &resposta);
 } while (resposta != 1);

 return 0;

}
