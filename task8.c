#include<stdio.h>
void main()
{
  int num,i;

  printf("enter an integer number ");
  scanf("%d" ,&num);

  i=1;

  while(i<=10)
 {
   printf("%d\n", (num*i));
   i++;
 }
}

