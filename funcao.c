#include<stdio.h>
#include<stdlib.h>
#include<locale.h>





int calcularsoma(int numeroum, int numerodois){


    return numeroum +numerodois;
}


int main(){
    setlocale(LC_ALL,"portuguese");

    

    int primeironumero, segundonumero, soma;


    printf("digite o primeiro numero");
    scanf("%d", &primeironumero);

    printf("Digite o segundo numero");
    scanf("%d", &segundonumero);


    soma=calcularsoma(primeironumero,segundonumero);

printf("Soma %d", soma);









return 0;
}
