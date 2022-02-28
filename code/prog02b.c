#include <stdio.h>

int main()
{
  char c0 = 'a', c1='b';
  int i = 0xdeaddead;
  float f;

  printf("c = %c, i = %d, f = %f\n", c0, i, f);
  printf("c0 = %p, c1 = %p, i = %p, f = %p\n", &c0, &c1, &i, &f);
  printf("%ld\n", (void*)&i - (void*)&c0);

  return 0;
}
