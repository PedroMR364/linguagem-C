#include <stdio.h>

int main(){
    int num;
    printf("Digite um número: \n");
    scanf("%d",&num);

    if( num % 2 == 0){
        printf("Este número é Par \n");
    }
    else{
        printf("Este número é Impar \n");
    }
    return 0;
}