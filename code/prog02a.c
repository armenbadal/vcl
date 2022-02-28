#include <stdio.h>

int main()
{
  printf("char = %ld, short = %ld, int = %ld, "
         "long = %ld, float = %ld, double = %ld\n",
         sizeof(char), sizeof(short), sizeof(int),
         sizeof(long), sizeof(float), sizeof(double));

  return 0;
}
