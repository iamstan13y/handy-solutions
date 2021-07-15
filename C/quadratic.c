#include <stdio.h>
#include <math.h>

int main(){

int a,b,c;
float d, root1, root2;
printf("Enter The Coefficents For Your Equation:\n");

scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);

d=pow(b,2)-(4*a*c);

if (d<0){
    printf("This Equation Has No Real Roots!\n");
} else{
    root1=(-b+sqrt(d))/(2*a);
    root2=(-b-sqrt(d))/(2*a);

    printf("The Roots To The Equation Are: %.2lf and %.2lf\n", root1, root2);
}
}