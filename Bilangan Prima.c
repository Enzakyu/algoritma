#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include <stdio.h>

int main() { 
   int loop, number;
   int prime = 1;
   
   number = 11;

   for(loop = 2; loop < number; loop++) {
      if((number % loop) == 0) {
         prime = 0;
      }
   }

   if (prime == 1)
      printf("%d PRIMA.", number);
   else
      printf("%d BUKAN.", number);
   return 0;
}
