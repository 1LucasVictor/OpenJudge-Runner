#include <stdio.h>
#define MAX 50

int fib(int n, int memo[]) {
   int ans;
   if (n == 0 || n == 1) {
	  memo[n] = 1;
	  return 1;
   }
   if (memo[n] == -1) {
	  ans = fib(n - 1, memo) + fib(n - 2, memo);
	  memo[n] = ans;
	  return ans;
   }
   else 
	  return memo[n];
}

int main() { 
   int memo[MAX];
   int n;
   int i = 0;

   while (i < MAX) {
	  memo[i] = -1;
	  ++i;
   }

   scanf("%d", &n);
   
   printf("%d\n", fib(n, memo));

   return 0;
}