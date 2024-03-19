
#include<stdio.h>



int main(){
	
	int a[10000],b[500],n,m,i,j;
	int count=0;
	
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);}
	
	scanf("%d",&m);
	for(j=0;j<m;j++){
	scanf("%d",&b[j]);}
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		if(a[i]==b[j])
		count++;
		}
	}
	printf("%d",count);
}