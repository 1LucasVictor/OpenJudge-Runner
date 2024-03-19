
#include<stdio.h>
#include<string.h>
#define max(a, b) ((a) > (b) ? (a) : (b))
int mem[1000001];

int main()
{
loop:;
  int n, m, i, ans = 0;
  scanf("%d", &n);
  if(!n)
    return n;

  memset(mem, 0, sizeof(mem));
  for(i = 1; i <= n; i++)
  {
    scanf("%d", &m);
    ans = max(ans, mem[i] = max(mem[i - 1] + m, m));
  }
  printf("%d\n", ans);
  goto loop;
}