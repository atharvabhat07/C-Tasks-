#include<stdio.h>
int main()
{
float a,b,celcius,fahrenheit;
  int ch; 
  printf("1. For Fahrenheit to Celsius\n");
  printf("2. For Celcius to Fahrenheit\n");
  printf("\n\nEnter your choice\n");
  
 scanf("%d",&ch);
 switch(ch)
 {
 case 1 :
  printf("\nEnter the value of Fahrenheit temperature ");
  scanf("%f",&a);
  celcius=5*(a-32)/9;	
  printf("\n\nCelcius temperature %f",celcius);
  break;
 case 2 :
  printf("\n\nEnter the value of Celcius temperature ");
  scanf("%f",&b);
  fahrenheit=(9*b/5)-32;
  printf("\n\nFahrenheit temperature %f", fahrenheit);
  break;
 default :
 printf("\n\nInvalid choice\n");
 }
 
 return (0);
}
