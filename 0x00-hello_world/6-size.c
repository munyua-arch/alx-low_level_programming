#include <stdio.h>
/**
 * main -program that prints the size of various types
 *
 * Result: 0 (success)
 */
int main(void)
{
	int i;
	char c;
	float f;
	long int l;
	long long int u;

	printf("The size of int is:%lu.\n", sizeof(i));
	printf("The size of c is:%lu.\n", sizeof(c));
	printf("The size of float is:%lu.\n", sizeof(f));
	printf("The size of long int is:%lu.\n", sizeof(l));
	printf("The size of long long int is:%lu.\n", sizeof(u));
	return (0);
}
