#include"main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n : number to calculate square root of
 * Return : resulting square root
 */
{
	if (n < 0)
                return (-1);
        return (actual_sqrt_recursion(n, 0));
}
