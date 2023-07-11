#include <stdio.h>

int compute(int num1, int num2)
{
	int mul, sum, res;

	mul = num1 * num2;
	sum = num1 + num2;

	res = mul % sum;

	return (res);
}

int main ()
{
	int num1, num2, res;

	printf("Input the two numbers\n");
	scanf("%d %d", &num1, &num2);

	res = compute(num1, num2);

	printf("Result is: %d\n", res);
	return (0);
}
