#include<stdio.h>
#include<string.h>

void main()

{
   char first_name[30], last_name[30];

   printf("enter your first name ");
   gets(first_name);

   printf("\nenter your last name ");
   gets(last_name);
   
   printf("%s %s",first_name,last_name);
}  
