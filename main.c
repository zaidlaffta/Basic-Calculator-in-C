//This is a basic calculator in C

#include <stdlib.h>
#include <stdio.h>
int operation1 (int x, int y, char z);
int main (){
    int num1, num2, num3;
    char operation;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter operation ");
    scanf("%s",&operation);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    int result = operation1(num1, num2, operation);
    printf("%d", result);
    printf("\n\n");
    return 0;
}
int operation1 (int x, int y, char z){
    if (z == '+')
        return x+y;
    else if (z == '-')
        return x-y;
    else if (z == '/')
        return x/y;
    else if (z != '-' || z != '+' || z != '/'){
        printf("This is not valid operation, probram termination: byyyyyyy");
        exit(100);}
    
    return 0;
    
}
