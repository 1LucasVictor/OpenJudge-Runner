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
	int yy500,zz500;
	int yy5,zz5;
  
  scanf("%d", &len);
//	printf("len %d\n",len);
	yy500 = len/500;
  	zz500 = len%500;
	yy5 = zz500/5;
//  printf("yy %d  zz %d\n",yy500,zz500);
  printf("%d\n",yy500*1000+yy5*5);
  
	return 0;
}
