#include <stdio.h>
#include <math.h>

int x;
int y;

int add(int x, int y) {
    return x + y;
}

int sub(int x, int y) {
    return x - y;
}

int mul(int x, int y) {
    return x * y;
}

int main(void) {
  while (1) {
      scanf("%d %d", &x, &y);
  }
  return 0;
}