#include <stdio.h>
#include <math.h>

int main() {

 float a;
 float b;
 float c;
 float sol1;
 float sol2;
 float discr;
 float discroot;

printf("Welcome user!\n\n");
    printf("------------------------------------------------------------------------------\n\n");
printf("a*x^2 + b*x + c = 0\n\n");
printf("Let me know the numbers a, b and c.\n\n");
printf("a= ");
scanf("%f",&a);
printf("\n");
printf("b= ");
scanf("%f",&b);
printf("\n");
printf("c= ");
scanf("%f",&c);
printf("\n");
printf("so your polynomial equation is %.0fx^2 + %.0fx +%.0f = 0\n\n", a,b,c);
    printf("------------------------------------------------------------------------------\n\n");
discr = ((b*b)-(4*a*c));



if (discr >= 0){
discroot=(sqrt(discr));
printf("discriminant: %.02f\n\n",discr);
printf("discriminant square root: %.02f\n\n",discroot);
}
if (discr < 0){
printf("discriminant square root: no square root\n\n");
}
    printf("------------------------------------------------------------------------------\n\n");

if (discr > 0){
     sol1=((-b+discroot)/(2*a));
     sol2=((-b-discroot)/(2*a));
     printf("discriminant: positive. two solutions for x.\n\n");
     printf("x1= %.02f x2= %.02f\n\n",sol1,sol2);
     }

    else if (discr == 0){
     sol1=-b/(2*a);
     printf("discriminant: equal to zero. two identical solutions, in practice one solution. x.\n\n");
     printf("x= %.02f\n\n",sol1);
     }

     else{
     printf("discriminant: negative.\n\n");
       printf("no real solution.\n\n");
    }

    printf("------------------------------------------------------------------------------\n\n");

    printf("Press ENTER to dismiss me\n\n");
    printf("------------------------------------------------------------------------------\n");
    printf("Github: @creatorpanda\n");
    printf("creation of 2017\n");
    getch();
}
