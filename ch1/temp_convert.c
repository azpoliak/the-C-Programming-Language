#include <stdio.h>

main()
{
  int fahr, cels;
  int lower, upper, step;

  lower = 0;
  step = 20;
  upper = 300;

  fahr = lower;
  while (fahr <= upper) {
    cels = 5 * (fahr - 32) /9;
    printf("%d\t%d\n", fahr, cels);
    fahr = fahr + step;
  }

}
