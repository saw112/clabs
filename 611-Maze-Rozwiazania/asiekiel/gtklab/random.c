/* Artur Siekielski, 30 października 2003
 * Funkcje obsługujące generator liczb losowych -- implementacja */

#include "random.h"
#include <stdlib.h>

void init_random_gen(void)
{
      /* Jako 'seed' daj generatorowi liczbę sekund od 1.1.1970 + PID */
      srand(time(NULL) + getpid());
}

int random_integer(int from, int to)
{
      return (rand() % (to - from)) + from;
}

