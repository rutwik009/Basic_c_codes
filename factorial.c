//I have made changs
#include<stdio.h>  
void main()    
{    
 int i,n,fact=1;    
 printf(" Please enter a number to find factorial : ");    
 scanf("%d",&n);
 i=1;
 while(i<=n)
 {    
    fact*=i;
    i++;
  
 }    
  printf("The factorial of number %d is = %d",n,fact);    
}   
