#include <stdio.h>
#include <math.h>

int add(int x, int y) {
	return x + y;
}

int sub(int x, int y) {
	return x - y;
}

int mul(int x, int y) {
	return x * y;
}

float div(int x, int y) {
	return x / y;
}

int main(void) {
	float x = div(9, 3);
	printf("%f", x);
	return 0;
}
