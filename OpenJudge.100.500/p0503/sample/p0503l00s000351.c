#include<stdio.h>
 
int main(){
 
int A[200000],N,i=0,i2=0,t;
 
 
/*数を入力*/
scanf("%d", &N);
for(i=0;i<N;i++)scanf("%d",A+i);
 
/**バブルソート*/
for(i=0;i<N-1;i++){
	for(i2=N-1;i2>i;i2--){
		if(A[i2]<A[i2-1]){
			t=A[i2]; A[i2]=A[i2-1]; A[i2-1]=t;
		}
	}
}
  /*配列数を比較し、同じならYes 違うならNo*/
for (int i = 0; i > N-1; i++)
{
	/* code */
	if(A[i2]==A[i2-1]){
			printf("NO\n"); return 0;
		}
}
 
	printf("YES\n");
	return 0;
}