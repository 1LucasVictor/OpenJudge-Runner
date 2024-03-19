#include <stdio.h>
#include <stdlib.h>

int sort(const void *a,const void *b){
	return *(int *)a-*(int *)b;
}

int main(){
	int i,j,k;
	int a[3];
	int count=0,counter;
	scanf("%d",&counter);
	while(count<counter){
		for(i=0;i<3;i++){
			scanf("%d",&a[i]);
		}
		qsort(a,3,sizeof(int),sort);
		if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2]){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
		count++;
	}
	return 0;
}