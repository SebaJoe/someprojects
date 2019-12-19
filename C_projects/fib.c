#include <stdio.h>

int fib(int i) {
	if(i == 0)
		return 0;
	if(i == 1)
		return 1;
	return fib(i - 1) + fib(i - 2);
}

int main(int argc, char** argv) {
	int input;
	printf("Enter N for the nth fibonacci number: ");
	scanf("%d", &input);
	int fib_num = fib(input);
	printf("\nThe %dth fibonacci number is: %d\n", input, fib_num);
	return 0;
}
