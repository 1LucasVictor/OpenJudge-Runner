#include<stdio.h>

int main(void)
{
  int a;
  int b[4];
  int i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
  while(scanf("%d", &a)!=EOF)
    {
      n = 0;
      for(j = 9; j >= 0; j--){
        for(k = 9; k >= 0; k--){
          for(l = 9; l >= 0; l--){
            for(m = 9; m >= 0; m--){
              if(j + k + l + m == a)
                n++;
            }
          }
	}
      } 
      printf("%d\n", n);
    }
  return 0;
}