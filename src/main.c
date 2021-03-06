/*
 * 	main.c
 *
 *  Created on: Mar 8, 2014
 *  Author: William Oliveira <sudowilliam@gmail.com>
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

/*
 * 10. Elabore um programa que solicite ao usuário entrar com o valor do dia,
 *     mês e ano (inteiros). Em seguida, imprima os valores lidos separados
 *     por uma barra (/)
 */

void exercise_10() {
    int day;
    int month;
    int year;

    printf("Digite os valores a seguir no formato 00/00/0000\n");

    printf("Que dia é hoje? ");
    scanf("%d", &day);

    printf("Em que mês estamos? ");
    scanf("%d", &month);

    printf("Em que ano estamos? ");
    scanf("%d", &year);

    printf("A data atual é: %d/%d/%d\n", day, month, year);
}

/*
 * 11. Elabore um programa que contenha uma constante qualquer do tipo float.
 *     Use o comando `#define`. Imprima essa constante.
 */

void exercise_11() {
    #define NUM 10.50

    printf("%f\n", NUM);
}

/*
 * 12. Elabore um programa que contenha uma constante qualquer do tipo int.
 *     Use o comando `const`. Imprima essa constante.
 */

void exercise_12() {
    const int NUM1 = 10;

    printf("%d\n", NUM1);
}

/*
 * 13. Faça um programa que leia um caractere do tipo char e depois o imprima
 *     entre aspas duplas. Assim, se o caractere lido for a letra A, deverá
 *     ser impresso "A".
 */

void exercise_13() {
    char letter;

    printf("Digite um caractere qualquer: ");
    scanf("%c", &letter);
    printf("O caractere digitado foi %c\n", letter);
}

int main() {
    int choice;

    printf("Digite o número do exercício que deseja executar (entre 1 e 13): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            exercise_1();
            break;
        case 2:
            exercise_2();
            break;
        case 3:
            exercise_3();
            break;
        case 4:
            exercise_4();
            break;
        case 5:
            exercise_5();
            break;
        case 6:
            exercise_6();
            break;
        case 7:
            exercise_7();
            break;
        case 8:
            exercise_8();
            break;
        case 9:
            exercise_9();
            break;
        case 10:
            exercise_10();
            break;
        case 11:
            exercise_11();
            break;
        case 12:
            exercise_12();
            break;
        case 13:
            exercise_13();
            break;
        default: printf("Você não selecionou uma opção correta!\n");
    }

    printf("Até logo!\n");
    return 0;
}
