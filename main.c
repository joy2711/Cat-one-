#include <stdio.h>
int main()
{
    printf("0\n");
    char opt;
    int n1, n2;
    float res;
    printf (" Select an operator (+, -, *, /)\n ");
    scanf ("%c", &opt);
    printf (" Enter the first number: ");
    scanf(" %d", &n1); 
    printf (" Enter the second number: ");
    scanf (" %d", &n2); 

    if (opt == '+')
    {
        res = n1 + n2; // add two numbers
        printf (" Result of %d %c %d is: %f", n1,opt,n2, res);
    }

    else if (opt == '-')
    {
        res = n1 - n2; 
        printf ("  Result of %d %c %d is: %f ", n1,opt, n2, res);
    }

    else if (opt == '*')
    {
        res = n1 * n2; 
        printf ("  Result of %d %c %d is: %f ", n1, opt, n2, res);
    }

    else if (opt == '/')
    {
        if (n2 == 0)   // if n2 == 0, take another number
        {
            printf (" \n Divisor cannot be zero. Please enter another value ");
            scanf ("%d", &n2);
        }
        res = n1 / n2; 
        printf ("  Result of %d %c %d is: %.2f", n1,opt, n2, res);
    }
    else
    {
        printf(" \n You have entered wrong inputs ");
    }
    return 0;
}

