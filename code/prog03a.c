#include <stdio.h>
#include <math.h>

static const double pi = 3.14159;

double sphere_mass(double radius, double density)
{
  return density * 4 / 3 * pi * pow(radius, 3);
}

int main()
{
  const double k = sphere_mass(2.7, 0.15);
  printf("%lf\n", k);

  return 0;
}
