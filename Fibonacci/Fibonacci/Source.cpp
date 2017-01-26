#include<stdio.h>
int count0 = 0;
int count1 = 0;
int fibonacci(int input) {
	if (input == 0) {
		count0++;
		return 0;
	}
	else if (input == 1) {
		count1++;
		return 1;
	}
	else {
		return fibonacci(input - 1) + fibonacci(input - 2);
	}
}
int main() {
	int testCase, input;
	scanf("%d", &testCase);
	while (testCase--) {
		scanf("%d", &input);
		fibonacci(input);
		printf("%d %d\n", count0, count1);
		count0 = 0; count1 = 0;
	}
	return 0;
}