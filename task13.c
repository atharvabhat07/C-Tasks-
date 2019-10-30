#include<stdio.h>
int main()
{
  int a[100] , i, n, small, large;
  printf("how many elements ");
  scanf("%d",&n);
  printf("enter the array ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  } 
  
   small=large=a[0];
   
   for(i=0; i<n; i++)
   {
     if(a[i]<small)
    	small=a[i];
     if(a[i]>large)
     	large=a[i];
   }

   printf("the smallest element is %d",small);
   printf("\nthe largest element is %d",large);
   
}
