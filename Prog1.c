#include <stdio.h>

int main (void) {
    char mes[256];
    int valoresrecebidos;
    int valorespagos;
    int saldo;
    
    printf("Quanto recebe por mes?\n");
    scanf("%s", valoresrecebidos);
    printf("Quanto paga ao final mes?\n");
    scanf("%d", valorespagos);
    printf("O seu saldo vai ser:\n");
    scanf("%d", saldo);

    saldo = valoresrecebidos - valorespagos;
}

