#include <stdio.h>
#include <math.h>
int main() {
  float weight_kg;
  float height_m;
  float BMI;
  scanf("%f" , &weight_kg);
  scanf("%f" , &height_m);
  BMI = weight_kg / pow(height_m,2);
  if(BMI>=30.0)
  {
    printf("Your BMI is %.2f\nYou are obese.", BMI);
    }
  else if(BMI>=25.0)
  {
    printf("Your BMI is %.2f\nYou are overweight.", BMI);
    }
  else if(BMI>=18.5)
  {
    printf("Your BMI is %.2f\nYou are normal weight.", BMI);
    }
  else
  {
    printf("Your BMI is %.2f\nYou are underweight.", BMI);
    }
}