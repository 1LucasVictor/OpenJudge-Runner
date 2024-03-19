#include <stdio.h>

#define NIL -1

int Fibonacci(int);

int f[45];

int main() {
  int i, n, ans;

  scanf("%d", &n);
  
  for (i = 0; i < 45; i++) {
    f[i] = NIL;
  }

  ans = Fibonacci(n);

  printf("%d\n", ans);

  return 0;
}


int Fibonacci(int n) {
  
  if (n == 0 || n == 1) return f[n] = 1;

  else {
    if (f[n-1] != NIL && f[n-2] != NIL) return f[n-1] + f[n-2];

    else if (f[n-1] != NIL) {
      f[n-2] = Fibonacci(n-2);
      return f[n-1] + f[n-1];
    }
    
    else if (f[n-2] != NIL) {
      f[n-1] = Fibonacci(n-1);
      return f[n-1] + f[n-2];
    }
    
    else {
      f[n-1] = Fibonacci(n-1);
      f[n-2] = Fibonacci(n-2);
      return Fibonacci(n-1) + Fibonacci(n-2);
    }
  }
  
}

