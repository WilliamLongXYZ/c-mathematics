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
int square(int x) {
	return x * x;
}

float sqrt(int x) {
	int prev,k = 0;
	int kmax=1000;
	float s=1;
	for (k=0;k<kmax;k++) {
		prev = s;
		s = (s + x/s)/2;
		if (prev == s) {
			break;
		}
	}
	return s;
}

int main(void) {
	return 0;
}
