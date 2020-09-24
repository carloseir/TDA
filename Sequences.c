#include <stdio.h>
#include "Sequences.h"

long long int Sequences_sfibo(long long int n)
{
  long long int t1 = 0, t2 = 1, sig;
  int i;

  for (i = 1; i <= n; ++i)
  {
    sig = t1 + t2;
    t1 = t2;
    t2 = sig;
  }
  return sig;
}

long long int Sequences_rfibo(long long int n)
{
  if (n>2)
    return Sequences_rfibo(n-1) + Sequences_rfibo(n-2);
  else if (n==2)
    return 1;
  else if (n==1)
    return 1;
  else if (n==0)
    return 0;
  else
    return -1;
}
