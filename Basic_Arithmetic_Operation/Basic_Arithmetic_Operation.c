#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    int num1,num2,sum,min,mul,div;
    char operation[10];
    int q;
    printf("Enter the first number: \n");
    scanf("%d",&num1);
    printf("\n Enter the second number: \n");
    scanf("%d",&num2);
    printf("\n NOW SELECT THE OPERATION BETWEEN THEM: SUM,MIN,MUL,DIV \n" );
    scanf("%s",operation);
     

    if (strcmp(operation , "sum")==0 || strcmp(operation, "Sum")==0 || strcmp(operation, "SUM")==0){
         q = 1;}
    else if (strcmp(operation , "min")==0 || strcmp(operation, "Min")==0 || strcmp(operation, "MIN")==0 ) {
         q= 2 ;}
    else if (strcmp(operation , "mul")==0 || strcmp(operation, "Mul")==0 || strcmp(operation, "MUL")==0 ) {
         q= 3 ;}
    else if (strcmp(operation , "div")==0 || strcmp(operation, "Div")==0 || strcmp(operation, "DIV")==0 ) {
         q= 4 ;}
    switch (q){
        case 1 : 
          sum = num1 + num2; 
           printf ("\n  SUM :     %d + %d = %d         \n ",num1,num2,sum);
           break;
        case 2: 
           min = num1 - num2;
           printf("\n MIN : %d - %d = %d       \n",num1, num2, min);
           break;
        case 3: 
           mul = num1 * num2;
           printf("\n Multiplication : %d * %d = %d   \n",num1,num2,mul);
           break;
        case 4:
           div = num1 / num2;
           printf("\n Div : %d / %d = %d    \n",num1,num2,div);
           break;
        default : 
           sum = num1 + num2; 
           printf ("\n  SUM :     %d + %d = %d         \n ",num1,num2,sum);
           break;   
           }  
           

  
  system("PAUSE");	
  return 0;
}
