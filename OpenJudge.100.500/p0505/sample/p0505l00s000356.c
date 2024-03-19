#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//降順
int s_dsort(const void *a, const void *b) {
  return *(int *)b - *(int *)a;
}

int main(void) {

	long H;   //体力 10**9
	int  N,A[100000];
	int  i;

//入力
    scanf("%ld %d",&H,&N);
    for(i=0;i<N;i++)
	    scanf("%d",&A[i]);

//降順に並べる
	qsort((void*)A,N,sizeof(int),s_dsort);

//やっつける！
	for(i=0;i<N;i++) {
		if(H<=0) break;
		H-=A[i];
	}
	if(H>0) printf("No");
	else    printf("Yes");

	return 0;
}
