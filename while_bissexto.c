#include <stdio.h>

int main(){

    int ano = 1950;
    int qdab = 0;

    while( ano <= 2024){
        if( ano %4 == 0 ){
            printf("O Ano %d é bissexto!\n",ano);
            qdab++;
        }
        ano++;
    }
    printf("Temos %d anos bissextos...\n",qdab);
    return 0;
}