#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int compare_int(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

int main(void)
{
	int i, j;
	//  dic_t dic[200000];
	int ii[100];
	int ilen[100];
	int min, max;
	int len, flg;
	int cnt, maxcnt;
  	char aa[5];
	scanf("%s", aa);

	if (aa[0] == aa[1])
	{
      if (aa[0] == aa[2])
      {
          printf("No\n");
          return 0;
      }
	}
    printf("Yes\n");
    return 0;
}
