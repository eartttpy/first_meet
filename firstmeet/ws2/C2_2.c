#include <stdio.h>
int main() {
  int AD;
  scanf("%d" , &AD);
  if(AD%400==0 || AD%4==0 && AD%100!=0)
  {
    printf("%d is a leap year. February has 29 days." , AD);
    }
  else
  {
    printf("%d is not a leap year. February has 28 days." , AD);
    }
}