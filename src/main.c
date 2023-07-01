#include <stdio.h>
#include "../inc/add.h"
#include "../inc/subtract.h"
#include "../inc/multiply.h"
#include "../inc/divide.h"

int main()
{
    int a = 10;
    int b = 5;

    int sum = add(a, b);
    printf("Sum of %d and %d is %d\n", a, b, sum);

    int difference = subtract(a, b);
    printf("Difference of %d and %d is %d\n", a, b, difference);

    int product = multiply(a, b);
    printf("Product of %d and %d is %d\n", a, b, product);

    int quotient = divide(a, b);
    printf("Quotient of %d and %d is %d\n", a, b, quotient);


    return 0;
}
