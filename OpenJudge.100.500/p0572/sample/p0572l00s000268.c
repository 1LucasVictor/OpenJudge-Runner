#include<stdio.h>
int main(void){
	long int L,R;
	int i,j;
	int ans;
	
	scanf("%d %d",&L,&R);
	ans = L*R;
	
	for(i=L; i<R; i++){
		for(j=i+1; j<=R; j++){
			if(ans > (i*j)%2019){
				ans = (i*j)%2019;
		}
			}
	}
	printf("%d\n",ans);
	return 0;
}
