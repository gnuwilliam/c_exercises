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
 *    usando apenas o comando `printf()`.
 */

void exercise_1() {
    printf("Início do Programa\n");
    printf("Fim\n");
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

int main() {
    char choice;
    
    printf("Digite o número do exercício que deseja executar (entre 1 e 15): ");
    choice = getchar();
    
    switch(choice) {
        case '1': exercise_1(); break;
        case '2': exercise_2(); break;
        default: printf("Você não selecionou uma opcão correta!\n");
    }
    
    printf("Até logo!\n\n");
    return 0;
}
