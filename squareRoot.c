#include <stdio.h>

int int_sqrt(int n) {
  int x = 1;
  while (x * x <= n) {
    x++;
  }
  return x-1;
}

int main() {
  int n;
  printf("enter the number\n");
  scanf("%d",&n);
  
  int result;
  result = int_sqrt(n);
  printf("The square root of %d is %d.\n", n, result);
  return 0;
}

