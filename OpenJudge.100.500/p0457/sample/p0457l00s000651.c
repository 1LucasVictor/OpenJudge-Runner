#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <inttypes.h>

int compare_int(const void *a, const void *b){//qsort 整数比較<
	return *(int*)a - *(int*)b;
}
int compare_int2(const void *a, const void *b){//qsort 整数比較>
	return *(int*)b - *(int*)a;
}

int main(void){
	int n,m;
	long long int k;
	long long int a[200010]={0},b[200010]={0};
	long long int a_s[200010]={0},b_s[200010]={0};
	int i,j;
	int tempi,tempj;
	int max=0;
	int temp=0;
	int flagi=0,flagj=0;

	scanf("%d %d %I64d",&n,&m,&k);
	for(i=0;i<n;i++){
		scanf("%I64d",&a[i]);
		if(i!=0){
			a_s[i+1]=a[i]+a_s[i];
		}else{
			a_s[i+1]=a[i];
		}
		if(a_s[i]>1000000000){
			flagi=1;
			break;
		}
	}
	tempi=i+flagi;
	for(i=0;i<m;i++){
		scanf("%I64d",&b[i]);
		if(i!=0){
			b_s[i+1]=b[i]+b_s[i];
		}else{
			b_s[i+1]=b[i];
		}
		if(b_s[i]>1000000000){
			flagj=1;
			break;
		}
	}
	tempj=i+flagj;
	for(i=0;i<=tempi;i++){
		for(j=tempj;j>=0;j--){
			if(k<(a_s[i]+b_s[j])){
				continue;
			}else{
				temp=i+j;
				break;
			}
		}
		tempj=j;
		if(max<temp){
			max=temp;
		}
	}
	printf("%d",max);


	return 0;
}
