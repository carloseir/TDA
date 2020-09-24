#include <stdio.h>
#include <time.h>

#include "files.h"
#include "Sequences.h"

int main(void)
{
  int n = 24, i;
  FILE * new;
  long double buffer[n][3];
  double cpu_time = 0;
  clock_t start, stop;
  new = file_new("FIBONACCI.txt", "w");

  for(i = 1; i<=n; i++)
  {
    start = clock();
    Sequences_rfibo(n);
    stop = clock();
    cpu_time = ((double)(stop-start))/CLOCKS_PER_SEC / 100;
    buffer[n][0] = n;
    buffer[n][1] = cpu_time;
    printf("Recursiva: %f\n", cpu_time);

    start = clock();
    Sequences_sfibo(n);
    stop = clock();
    cpu_time = ((double)(stop-start))/CLOCKS_PER_SEC / 100;
    buffer[n][0] = n;
    buffer[n][2] = cpu_time*1000;
    printf("Secuencial: %f\n", cpu_time*1000);
  }

  file_num_write(new, 3, buffer, n);
  fclose(new);

}
