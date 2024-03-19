#include<stdio.h>
int a[10000];
int main(){
	int h,n;
	scanf("%d %d",&h,&n);
	int i;
	int s=0;
	for(i=0;i<n;i++){
		scanf(" %d",&a[i]);
		s+=a[i];
	}
	if(h<s){
		printf("Yes");
	}
	else{
		printf("No");
	}
	
	
}