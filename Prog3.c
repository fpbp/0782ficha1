#include <stdio.h>

int main (void){
   float valorpagar;
   const float Preco = 0.16;
   float iva;
   float consumo;
   float precofinal;
   const float potencia = 5.42;

   printf("consumo de eletricidade:\n");
   scanf(" %f" &consumo);
   
   valorpagar = potencia + (consumo + Preco);
   iva = valorpagar * 0.18;
   precofinal = valorpagar + iva;
   
   printf("tera que pagar: %f\n");
}