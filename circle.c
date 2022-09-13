#include<stdio.h>
#include<conio.h>
int main(){
    float radius, area;
    printf("enter radius of circle ");
    scanf("%f",&radius);
    area = radius*radius;
    printf("area of circle: %0.4f\n",area);
    return 0;
}