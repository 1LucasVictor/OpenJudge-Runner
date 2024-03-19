#include<stdio.h>
int main(void){
	int L,R;
	int i,j;
	int min,ans;
	
	scanf("%d %d",&L,&R);
	ans = L*R;
	
	for(i=L; i<R; i++){
		for(j=i+1; j<=R; j++){
			min = (i*j)%2019;
			if(ans > min){
				ans = min;
			}
		}
	}
	printf("%d\n",ans);
	return 0;
}
