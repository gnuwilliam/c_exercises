/* 
 * File:   main.c
 * Author: William Oliveira <sudowilliam@gmail.com>
 *
 * Created on March 5, 2014, 2:58 PM
 */

#include <stdio.h>
#include <stdlib.h>

/* 
 * 1. Elabore um programa que escreva as mensagens:
 *    "Início do Programa" e "Fim" na tela, uma em cada linha,
 *    usando apenas um comando `printf()`.
 */

void exercise_1() {
    printf("Início do Programa\nFim\n");
}

/*
 * 2. Escreva um programa que leia um número inteiro
 *    e depois o imprima
 */

void exercise_2() {
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    printf("O valor digitado foi: %d \n", num);
}

/*
 * 3. Escreva um programa que leia um número inteiro e depois imprima
 *    a mensagem: "Valor lido:", seguido do valor inteiro. Use apenas um
 *    comando `printf()`
 */

void exercise_3() {
    int num;
    scanf("%d", &num);
    printf("Valor lido: %d\n", num);
}

/*
 * 4. Faça um programa que leia um número inteiro e depois o imprima usando
 *    o operador `%f`. Veja o que acontece.
 */

void exercise_4() {
    int num;
    printf("Digite um valor inteiro: ");
    scanf("%d", &num);
    printf("O valor digitado foi %f\n", num);
}

/*
 * 5. Faça um programa que leia um valor do tipo float e depois o imprima
 *    usando o operador `%d`. Veja o que acontece.
 */

void exercise_5() {
    int num;
    printf("Digite um valor do tipo float: ");
    scanf("%f", &num);
    printf("O valor digitado foi %d\n", num);
}

int main() {
    char choice;
    
    printf("Digite o número do exercício que deseja executar (entre 1 e 15): ");
    choice = getchar();
    
    switch(choice) {
        case '1': exercise_1(); break;
        case '2': exercise_2(); break;
        case '3': exercise_3(); break;
        case '4': exercise_4(); break;
        case '5': exercise_5(); break;
        default: printf("Você não selecionou uma opcão correta!\n");
    }
    
    printf("Até logo!\n\n");
    return 0;
}
