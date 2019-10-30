#include<stdio.h>
void main()
{
  int a, b, c,sum ;
  float avg;
  printf("enter sub1 marks ");
  scanf("%d",&a);
  
  printf("\nenter sub2 marks ");
  scanf("%d",&b);
  
  printf("\nenter sub3 marks ");
  scanf("%d",&c);

  sum =a+b+c;
  avg=sum/3;
  
  printf("\n Sum of %d %d %d is  %d",a,b,c,sum);
  printf("\n avg of %d %d %d is  %f",a,b,c,avg);
}
