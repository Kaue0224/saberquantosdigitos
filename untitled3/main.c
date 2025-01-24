#include <stdio.h>

void saberquantosdig(int valor) {

    int teste = 1;
    int divi = 10;
    int contador = 0;


    while (teste >= 1) {


        teste = valor / divi;

        divi *= 10;

        contador++;
    }

    printf("\no numero %d tem %d digitos",valor,contador);


}


int main(void){

    int valor;

    printf("digite algum numero: ");
    scanf("%d",&valor);

    saberquantosdig(valor);



    return 0;
}
