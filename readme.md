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

#### Operacoes.c

```c
#include<stdio.h>

int main(){
    int n1;
    int n2;
    int soma;
    int subtrair;
    int multiplicar;
    int dividir;

    printf("Digite um número e tecle enter: \n");
    scanf("%d",&n1);

    printf("Digite outro número e tecle enter: \n");
    scanf("%d",&n2);

    soma = n1 + n2;
    subtrair = n1 - n2;
    multiplicar = n1 * n2;
    dividir = n1 / n2;

    printf("O resultado da soma é %d\n",soma);
    printf("O resultado da subtração é %d\n",subtrair);
    printf("O resultado da multiplicação é %d\n",multiplicar);
    printf("O resultada da divisão é %d\n",dividir);
    return 0;
}
```

#### Desconto.c

```c
#include <stdio.h>

int main(){
    float preco;
    float percentual;
    float resultado;
    float vdesc;

    printf("Digite o preço do produto: \n");
    scanf("%f",&preco);
    
    printf("Digite o desconto do produto: \n");
    scanf("%f",&percentual);

    resultado = preco - (preco * ( percentual / 100));

    vdesc = preco - resultado;

    printf("O preço final do produto com desconto de %2.2f é %2.2f\n",vdesc,resultado);
    return 0;

}
```