#include <stdio.h>
int main()
{
    // declare local variables
    printf("0\n");
    char opt;
    int n1, n2;
    float res;
    printf (" Select an operator (+, -, *, /) to perform an operation in C calculator \n ");
    scanf ("%c", &opt); // take an operator
    printf (" Enter the first number: ");
    scanf(" %d", &n1); // take fist number
    printf (" Enter the second number: ");
    scanf (" %d", &n2); // take second number

    if (opt == '+')
    {
        res = n1 + n2; // add two numbers
        printf (" Result of %d %c %d is: %f", n1,opt,n2, res);
    }

    else if (opt == '-')
    {
        res = n1 - n2; // subtract two numbers
        printf ("  Result of %d %c %d is: %f ", n1,opt, n2, res);
    }

    else if (opt == '*')
    {
        res = n1 * n2; // multiply two numbers
        printf ("  Result of %d %c %d is: %f ", n1, opt, n2, res);
    }

    else if (opt == '/')
    {
        if (n2 == 0)   // if n2 == 0, take another number
        {
            printf (" \n Divisor cannot be zero. Please enter another value ");
            scanf ("%d", &n2);
        }
        res = n1 / n2; // divide two numbers
        printf ("  Result of %d %c %d is: %.2f", n1,opt, n2, res);
    }
    else
    {
        printf(" \n You have entered wrong inputs ");
    }
    return 0;
}

