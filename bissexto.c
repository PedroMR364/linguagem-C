#include <stdio.h>

int main(){
    int ddn;

    printf("Digite sua data de nascimento: \n");
    scanf("%d",&ddn);

    if(ddn %4== 0 ){
        printf("O Ano é Bissexto!\n");
    }
    else{
        printf("O Ano não é Bissexto!\n");
    }

}