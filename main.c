#include <stdio.h>

int main(void)
{
    int firstNumber;
    int secondNumber;

    printf("Enter the first number integer: \n");
    scanf("%d", &firstNumber);

    printf("Enter the second number integer: \n");
    scanf("%d", &secondNumber);

    if(firstNumber > secondNumber) {
        printf(" The biggest number: %d", firstNumber);
    }else if(secondNumber > firstNumber){
        printf("The biggest number: %d", secondNumber);
    }else{
        printf("The two numbers is equals %d and %d: ", firstNumber, secondNumber);
    }

    return (0);
}