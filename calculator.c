#include<stdio.h>
int main()
{
char op;
double A,B,sum,subtract,multiply,division;
printf("enter an operator");
scanf("%c",&op);
printf("enter two numbers");
scanf("%lf %lf",&A,&B);
switch(op)
{
case'+':
sum = A + B;
printf("RESULT=%2lf",sum);
break;
case'-':
subtract = A - B;
printf("RESULT=%2lf",subtract);
break;
case'/':
division = A / B;
printf("RESULT=%2lf",division);
break;
case'*':
multiply = A * B;
printf("RESULT=%2lf",multiply);
break;
default:
printf("wrong operator");
}
return 0;
}
