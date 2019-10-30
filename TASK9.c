#include<stdio.h>
void main()
{
 int i, n, fact=1;

  printf("enter a number to calculate factorial\n");
  scanf("%d", &n);

  for(i=1; i<=n; i++)
  {
     fact= fact*i;
  }
   printf("factorial of %d= %d\n", n ,fact);
}


