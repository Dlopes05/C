#include <stdio.h>

//função principal da linguagem C que serve como ponto de partida para a execução do programa
int main() {
//início do programa

//imprime na tela um título para ficar bonitinho
printf("******************************\n");
printf("*Bem vindo(a) a calculadora!!*\n");
printf("******************************\n");

//declaração das variaveis dos numeros que o usuário escolhe para fazer as operações
int numero1;
int numero2;

printf("Digite o valor do primeiro numero aqui:\n ");
//scanf captura o valor digitado e armazenar na variavel numero1
scanf("%d", &numero1);


printf("Digite o valor do segundo numero aqui:\n ");
//scanf captura o valor digitado e armazenar na variavel numero2
scanf("%d", &numero2);

//mostra na tela os numeros digitados pelo usuário
printf("Os numeros escolhidos foram %d e %d\n", numero1,numero2);

//variáveis das operações matemáticas:

//operação de soma
int soma = numero1 + numero2;
//operação de subtração
int subtracao = numero1 - numero2;
//opração de divisão
int divisao = numero1 / numero2;
//operação de multiplicação
int multiplicacao = numero1 * numero2;


//inicio loop
//estrutura de repetição while(1) -> significa que é um loop infinito até que algo pare ele
while(1){
    //imprimir as opções de operações matemáticas na tela
    printf("Escolha qual operacao matematica voce deseja fazer com os numeros: (1/soma),(2/subtracao)3/divisao),(4/multiplicacao)\n");

    //variável que recebe o numero designado para cada operação matemática
    int operacao;
    //armazena o numero digitado pelo usuário na variável operacao
    scanf("%d", &operacao);

    //condição para que se a pessoa digitar um numero que não condiz com os designados para cada operação matemática não continuar
    if(operacao < 1 || operacao > 4) {
        printf("Voce deve escolher um numero entre 1 e 4\n");
            continue;
    }
    //condição para que cada operação possa funcionar caso selecionada
        if(operacao == 1){
            printf("A soma de %d + %d eh de %d\n", numero1,numero2,soma);
            //para encerrar a repetição assim que esse bloco de condição seja executado
            break;
        }else if(operacao == 2){
            printf("A subtracao de %d - %d eh de %d\n",numero1,numero2,subtracao);
            //para encerrar a repetição assim que esse bloco de condição seja executado
            break;
        }else if(operacao == 3){
            printf("A divisao de %d / %d eh de %d\n",numero1,numero2,divisao);
            //para encerrar a repetição assim que esse bloco de condição seja executado
            break;
        }else{
            printf("A multiplicao de %d * %d eh de %d\n",numero1,numero2,multiplicacao);
            //para encerrar a repetição assim que esse bloco de condição seja executado
            break;
        }
        //fim do loop

}
//fim do programa
}
