#include <stdio.h>
int main() {
   int num;
   int time;
   scanf("%d" , &num);
   for(int i=1; i<13; i++)
   {
      time = num*i;
      printf("%d * %d = %d\n", num,i,time);
   }
}