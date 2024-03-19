#include<stdio.h>
int compare(const void *a,const void *b){
	int *pa=(int*)a;
	int *pb=(int*)b;
	int num1=*pa;
	int num2=*pb;
	return num1-num2;
}
int main(){
	int n,j;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	qsort(a,n,sizeof(int),compare);
	int flag=1;
	for(int i=1;i<n;i++){
		if(a[i-1]==a[i]){
			flag=0;
			break;
		}
	}
	if(flag)printf("YES");
	else printf("NO");
	return 0;
} 