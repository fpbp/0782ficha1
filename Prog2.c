#include <stdio.h>

int main (void){
    int salario;
    int subsidioalimentacao;
    int descontos;
    int salarioliquido;

    printf("O seu salario:\n");
    scanf("%d", salario);
    printf("O seu subsidio de alimentacao:\n");
    scanf("%d", subsidioalimentacao);
    printf("Quanto desconta por mes:\n");
    scanf("%d", descontos);
    printf("Qual o seu salario liquido?\n");
    scanf("%d, salarioliquido");

    salarioliquido = salario + subsidioalimentacao - descontos 


}