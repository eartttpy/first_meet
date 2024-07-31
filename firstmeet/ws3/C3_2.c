#include <stdio.h>
int main() {
  int num1 = 0;
  int num2 = 1;
  int num3;
   for(int i=0; i<10; i++)
   {
      printf("%d ", num1);
      num3 = num1 + num2;
      num1 = num2;
      num2 = num3;
   }
}