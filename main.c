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
    float num;
    printf("Digite um valor do tipo float: ");
    scanf("%f", &num);
    printf("O valor digitado foi %d\n", num);
}

/*
 * 6. Faça um programa que leia um valor do tipo double e depois o imprima
 *    na forma de notação científica.
 */

void exercise_6() {
    double num;
    printf("Digite um valor do tipo double: ");
    scanf("%f", &num);
    printf("O valor digitado foi: %e\n", num);
}

/*
 * 7. Elabore um programa que leia um caractere e depois o imprima
 *    como inteiro
 */

void exercise_7() {
    char ch;
    printf("Digite um caractere: ");
    scanf("%c", &ch);
    printf("O valor digitado foi: %d\n", ch);
}

/*
 * 8. Faça um programa que leia dois números inteirose depois os imprima
 *    na ordem inversa em que eles foram lidos.
 */

void exercise_8() {
    int num1;
    int num2;
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo valor: ");
    scanf("%d", &num2);
    
    printf("%d\n", num2);
    printf("%d\n", num1);
}

/*
 * 9. Faça um programa que leia dois valores do tipo float. Use um único
 *    comando de leitura pra isso. Em seguida, imprima os valores
 *    na ordem inversa em que eles foram lidos.
 */

void exercise_9() {
    float num1;
    float num2;
    
    printf("Digite dois valores do tipo float: ");
    scanf("%f %f", &num1, &num2);
    
    printf("%f\n", num2);
    printf("%f\n", num1);
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
        case '6': exercise_6(); break;
        case '7': exercise_7(); break;
        case '8': exercise_8(); break;
        case '9': exercise_9(); break;
        default: printf("Você não selecionou uma opcão correta!\n");
    }
    
    printf("Até logo!\n");
    return 0;
}
