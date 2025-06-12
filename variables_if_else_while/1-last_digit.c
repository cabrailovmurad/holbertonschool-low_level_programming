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
srand(time(0)); /* Initsializiruem generator sluchaynykh chisel */
n = rand() - RAND_MAX / 2;/* Generiruyem sluchaynoye chislo ot -RAND_MAX/2 do +RAND_MAX/2 */
if ((n % 10) > 5) /* Poluchayem poslednyuyu cifru chisla */
{
printf("Last digit of %d is %d and is greater than 5\n",
n, n % 10);
}
else if ((n % 10) < 6 && (n % 10) != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n",
n, n % 10);
}
else
{
printf("Last digit of %d is %d and is 0\n",
n, n % 10);
}
return (0);
}
