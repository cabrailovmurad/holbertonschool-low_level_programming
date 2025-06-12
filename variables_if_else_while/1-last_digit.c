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

    srand(time(0));        /* Initsializiruem generator sluchaynykh chisel */
    n = rand() - RAND_MAX / 2;  /* Generiruyem sluchaynoye chislo ot -RAND_MAX/2 do +RAND_MAX/2 */
    last_digit = n % 10;   /* Poluchayem poslednyuyu cifru chisla */

    /* Ispol'zuyem if-else dlya proverki posledney cifry */
    if (last_digit == 0)
    {
        printf("Last digit of %d is %d and is 0\n", n, last_digit);
    }
    else if (last_digit > 0 && last_digit < 6)
    {
        printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
    }
    else
    {
        printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
    }

    return (0);
}

