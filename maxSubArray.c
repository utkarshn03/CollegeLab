#include <stdio.h>

int max_subarray_sum(int a[], int n) {
  int i, j, k, current_sum, max_sum = 0;
  for (i = 0; i < n; i++) {
    for (j = i; j < n; j++) {
      current_sum = 0;
      for (k = i; k <= j; k++) {
        current_sum += a[k];
      }
      if (current_sum > max_sum) {
        max_sum = current_sum;
      }
    }
  }
  return max_sum;
}

int main() {
  int a[] = {1, 3, 7, -2, -1, -5, -1, -2, -4, 6, 2};
  int n;
  n = sizeof(a)/sizeof(a[0]);
  int result = max_subarray_sum(a, n);
  printf("The maximum sub-array sum is %d.\n", result);
  return 0;
}

