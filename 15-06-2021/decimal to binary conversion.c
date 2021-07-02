#include <stdio.h>
int main()
{
  int n, c, k;
  printf("Enter decimal number \n");
  scanf("%d", &n);
  printf("%d It's binary number is:\n", n);
  for (c = 5; c >= 0; c--) 
  {
    k = n >> c;
    if (k & 1)
      printf("1");
    else
      printf("0");
  }
  return 0;
}
/*output
enter decimal number5
5 It's decimal number is; 000101
*/
