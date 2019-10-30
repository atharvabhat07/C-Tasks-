#include <stdio.h>

void main()
{
   int n, reverse_number = 0, rem, original_number=0;

   printf("Enter a number to get reverse number ");
   scanf("%d", &n);

   original_number=n;

    while(n!= 0)
   {
      rem = n%10;
      reverse_number = reverse_number*10 + rem;
      n=n/10;
   }

  printf("Reverse Number of %d is = %d",original_number,reverse_number); 
}
