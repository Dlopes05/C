#include <stdio.h>

//fun��o principal da linguagem C que serve como ponto de partida para a execu��o do programa
int main() {
//in�cio do programa

//imprime na tela um t�tulo para ficar bonitinho
printf("******************************\n");
printf("*Bem vindo(a) a calculadora!!*\n");
printf("******************************\n");

//declara��o das variaveis dos numeros que o usu�rio escolhe para fazer as opera��es
int numero1;
int numero2;

printf("Digite o valor do primeiro numero aqui:\n ");
//scanf captura o valor digitado e armazenar na variavel numero1
scanf("%d", &numero1);


printf("Digite o valor do segundo numero aqui:\n ");
//scanf captura o valor digitado e armazenar na variavel numero2
scanf("%d", &numero2);

//mostra na tela os numeros digitados pelo usu�rio
printf("Os numeros escolhidos foram %d e %d\n", numero1,numero2);

//vari�veis das opera��es matem�ticas:

//opera��o de soma
int soma = numero1 + numero2;
//opera��o de subtra��o
int subtracao = numero1 - numero2;
//opra��o de divis�o
int divisao = numero1 / numero2;
//opera��o de multiplica��o
int multiplicacao = numero1 * numero2;


//inicio loop
//estrutura de repeti��o while(1) -> significa que � um loop infinito at� que algo pare ele
while(1){
    //imprimir as op��es de opera��es matem�ticas na tela
    printf("Escolha qual operacao matematica voce deseja fazer com os numeros: (1/soma),(2/subtracao)3/divisao),(4/multiplicacao)\n");

    //vari�vel que recebe o numero designado para cada opera��o matem�tica
    int operacao;
    //armazena o numero digitado pelo usu�rio na vari�vel operacao
    scanf("%d", &operacao);

    //condi��o para que se a pessoa digitar um numero que n�o condiz com os designados para cada opera��o matem�tica n�o continuar
    if(operacao < 1 || operacao > 4) {
        printf("Voce deve escolher um numero entre 1 e 4\n");
            continue;
    }
    //condi��o para que cada opera��o possa funcionar caso selecionada
        if(operacao == 1){
            printf("A soma de %d + %d eh de %d\n", numero1,numero2,soma);
            //para encerrar a repeti��o assim que esse bloco de condi��o seja executado
            break;
        }else if(operacao == 2){
            printf("A subtracao de %d - %d eh de %d\n",numero1,numero2,subtracao);
            //para encerrar a repeti��o assim que esse bloco de condi��o seja executado
            break;
        }else if(operacao == 3){
            printf("A divisao de %d / %d eh de %d\n",numero1,numero2,divisao);
            //para encerrar a repeti��o assim que esse bloco de condi��o seja executado
            break;
        }else{
            printf("A multiplicao de %d * %d eh de %d\n",numero1,numero2,multiplicacao);
            //para encerrar a repeti��o assim que esse bloco de condi��o seja executado
            break;
        }
        //fim do loop

}
//fim do programa
}
