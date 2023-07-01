#include <stdio.h>
#include "../inc/add.h"
#include "../inc/subtract.h"
#include "../inc/multiply.h"
#include "../inc/divide.h"

/**
 * \addtogroup main_function Main Function
 */
/**@{*/
/**
 * \brief Main Function for performing arithmetic operations.
 *
 * \par Parameters
 *      None.
 * 
 * \retval Zero on success.
 *
 * \return int
 */
int main(void)
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
/**@}*/ /* End of main_function group*/
