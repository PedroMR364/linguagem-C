# Estudo da linguagem C
## Neste repositório será publicado arquivos escritos em c

<img src= "https://avatars.githubusercontent.com/u/25699522?s=200&v=4">

### Abaixo é apresentado os arquivos deste repositório

#### hello.c

```c
#include <stdio.h>
int main(){
    printf("hello,world\n");
    return 0;
}
```

#### Primeiro.c

```c
/*
Este programa pede ao usuário um número qualquer e depois exibe 
o número na tela
*/
#include <stdio.h> //estamos importando uma biblioteca para trabalhar com entrada e saida de dados

int main(){
    int idade;  //declaração da variavel idade do tipo inteiro
    printf("Digite a sua idade e tecle enter\n");
    scanf("%d",&idade);     //para pegar o número digitado pelo usúario 
                            //estamos usando o comando scanf e adicionando
                            //o valor digitado ao endereço de memória 
                            //da variável idade, Usamos e e-comercial 
                            //para referenciar o endereço de memória da variável
                            //idade
    printf("A idade digitada é %d\n endereço da variável idade %x \n",idade, &idade);
    return 0;                   
}
```

