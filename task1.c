#include<stdio.h>

void main()
{
	char name [50];
	int age,phone_number;
	
	printf("Enter your name ");
	scanf("%s",&name);
	
	printf("\nEnter your age ");
	scanf("%d",&age);
	
	printf("\nEnter Phone Number ");
	scanf("%d",&phone_number);
	
	printf("%s   %d   %d",name,age,phone_number);
}
