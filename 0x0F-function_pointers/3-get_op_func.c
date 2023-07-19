#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Selects correct function to perform
 * the operation on
 * @s: Operator passed as argument.
 *
 * Return: A pointer to the function corresponding
 * with the operator given.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int i = 0;

	while (ops[index].op != NULL && *(ops[index].op) != *s)
		index++;

	return (ops[index].f);
}
