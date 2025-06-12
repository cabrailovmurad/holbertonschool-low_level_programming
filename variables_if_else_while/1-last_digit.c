#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Pechatayet poslednyuyu cifru sluchaynogo chisla
 *        i opredelyayet, bolshe li ona 5, menshe 6 ili 0.
 *
 * Return: Vsegda 0.
 */
int main(void)
{
    int n;
    int last_digit;

    srand(time(0));        // Initsializiruem generator sluchaynykh chisel
    n = rand() - RAND_MAX / 2;  // Generiruyem sluchaynoye chislo ot -RAND_MAX/2 do +RAND_MAX/2
    last_digit = n % 10;   // Poluchayem poslednyuyu cifru chisla

    // Ispol'zuyem switch dlya proverki posledney cifry
    switch (last_digit) {
        case 0:
            printf("Last digit of %d is %d and is 0\n", n, last_digit);
            break;
        case 1 ... 5:  // Otnositel'no 1 do 5
            printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
            break;
        default:  // Vse chisla, bol'she 5 ili otnosit'sya k otnositelnym
            printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
            break;
    }

    return (0);
}

