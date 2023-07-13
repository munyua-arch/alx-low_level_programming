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

	printf("size of a char is:%lu.\n", (unsigned)sizeof(c));
	printf("size of an int is:%lu.\n", (unsigned)sizeof(i));
	printf("size of a long int is:%lu.\n", (unsigned)sizeof(l));
	printf("size of a long long int is:%lu.\n", (unsigned)sizeof(u));
	printf("size of a float is:%lu.\n", (unsigned)sizeof(f));
	return (0);
}
