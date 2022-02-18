#include <stdio.h>
//1 1 2 3 5 8
int main() {
  int t1 = 1, t2 = 1, nextTerm = 0, n;
  printf("Enter a positive number: ");
  scanf("%d", &n);

  // displays the first two terms which is always 1 and 1
  printf("Fibonacci Series: %d, %d, ", t1, t2);
  nextTerm = t1 + t2;
    // t1 = 1 t2 = 1 nextterm = 2
  while (nextTerm <= n) {
    printf("%d, ", nextTerm); //print 2
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
    // t1 = 1 t2 = 2 nextterm = 3  
  }

  return 0;
}
