#include <stdio.h>
int main() {
    float num_shape;
    float area;
    float r,w,h,b;
    printf("1. Rectangle\n2. Triangle\n3. Circle");
    printf("\nEnter your choice: ");
    scanf(" %f",&num_shape);
    if(num_shape==1)
    {
        printf("Enter your width: ");
        scanf(" %f",&w);
        printf("Enter your height: ");
        scanf(" %f",&h);
        area=w*h;
        if(area >= 0){
            printf("The area of the rectangle is: %.2f",area);
        }
        else{
            printf("The area of the rectangle is: Error"); 
        }
    }
    else if(num_shape==2)
    {
        printf("Enter your base: ");
        scanf(" %f",&b);
        printf("Enter your height: ");
        scanf(" %f",&h);
        area=b*h/2;
        if(area >= 0){
            printf("The area of the triangle is: %.2f",area);
        }
        else{
            printf("The area of the triangle is: Error"); 
        }
    }

    else if(num_shape==3){
        printf("Enter your radius: ");
        scanf(" %f",&r);
        area=3.14*r*r;
        if(area >= 0){
            printf("The area of the circle  is: %.2f",area);
        }
        else{
            printf("The area of the circle  is: Error"); 
        }
    }
    else{
        printf("Invalid choice");
    }
    return 0;
}