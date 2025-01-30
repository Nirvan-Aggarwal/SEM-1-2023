#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;
    while (1) 
	{
        printf("Enter an operator (+, -, *, /) or 'q' to quit:\n");
        scanf(" %c", &operator);

        if (operator == 'q' || operator == 'Q')
		{
            printf("Calculator exiting...\n");
            break;
        }

        
        printf("Enter first number:\n ");
        scanf("%lf", &num1);
        printf("Enter second number:\n ");
        scanf("%lf", &num2);

        switch (operator) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0)
				{
                    result = num1 / num2;
                }
				else
				{
                    printf("Error: Division by zero\n"); 
					continue;                 
                }
                break;
            default:
                printf("Invalid operator\n"); 
				continue;        
        }
        printf("Result: %lf\n", result);
    }
}
