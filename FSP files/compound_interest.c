#include <stdio.h>
#include<math.h>
int main()
{
   float p, t, r, ci; 
  
  printf("Enter principal amount "); 	
  scanf("%f", &p); 
  printf("Enter time in year "); 
  scanf("%f", &t); 	
  printf("Enter rate in percent ");
  scanf("%f", &r); 	
  /* Calculating compound interest */ 
  ci = p * (pow(1+r/100, t) - 1); 
  printf("Compound Interest = %0.3f", ci); 	 
  
  return(0); 
}