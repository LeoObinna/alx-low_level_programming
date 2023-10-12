#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add -This will returns the sum of two numbers.
 * @a: The first digit.
 * @b: The second digit.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - This will returns the difference of two numbers.
 * @a: The first digit
 * @b: The second digit
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - This will contributed eturns the product of two numbers.
 * @a: The first digit.
 * @b: The second digit.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - This returns the division of two numbers.
 * @a: The first digit
 * @b: The second digit
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - This returns the remainder of the division of two numbers.
 * @a: The first digit.
 * @b: The second digit
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
