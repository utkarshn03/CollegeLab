#include <stdio.h>

int occurs_more_than_half_times(int A[], int n) {
  int i, j, count;
  for (i = 0; i < n; i++) {
    count = 0;
    for (j = 0; j < n; j++) {
      if (A[i] == A[j]) {
        count++;
      }
    }
    if (count > n/2) {
      return A[i];
    }
  }
  return -1;
}

int main() {
  int A[] = {1, 2, 3, 2, 2, 2, 5, 4, 2};
  int n = sizeof(A) / sizeof(A[0]);
  int result = occurs_more_than_half_times(A, n);
  if (result != -1) {
    printf("%d occurs more than %d times.\n", result, n/2);
  } else {
    printf("No item occurs more than %d times.\n", n/2);
  }
  return 0;
}

