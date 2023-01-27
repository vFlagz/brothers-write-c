#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num1, num2, sum, min /*,mul,div*/;
    char operation[10];
    int q;
    printf("Enter the first number: \n");
    scanf("%d", &num1);
    printf("\n Enter the second number: \n");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("\n  SUM :     %d + %d = %d         \n ", num1, num2, sum);
    printf("\n NOW SELECT THE OPERATION BETWEEN THEM: SUM,MIN,MUL,DIV \n");
    scanf("%s", operation);
    /*
  Name:
  Copyright:
  Author:
  Date: 27/01/23 23:15
  Description:

    if (operation == "sum"){
         q = 1;
                  }
                  else if (operation == "min" ) {
                        q= 2 ;}
    switch (q){
        case 1 :
          sum = num1 + num2;
           printf ("\n  SUM :     %d + %d = %d         \n ",num1,num2,sum);
           break;
        case 2:
             min = num1 - num2;
             printf("\n MIN : %d - %d = %d       \n",num1, num2, min);
             break;
           }
           */

    system("PAUSE");
    return 0;
}