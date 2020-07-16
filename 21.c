//21.	Prime number or not
#include <stdio.h>
int main() { 
   int i, number;
   int prime = 1;
   printf("Enter the number- ",&number);
   scanf("%d",&number);

   for(i = 2; i < number; i++) {
      if((number % i) == 0) {
         prime = 0;
      }
   }
   if (prime == 1)
      printf("%d is prime number.", number);
   else
      printf("%d is not a prime number.", number);
   return 0;
}