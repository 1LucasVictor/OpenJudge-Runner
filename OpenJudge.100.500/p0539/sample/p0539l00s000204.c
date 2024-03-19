#include <stdio.h>
int main(){
	int n,i,a[100][2],b=0,f=0;
	scanf("%d",&n);
	for(i=1;i<n;i++){
		if(n%i==0){
			a[b][0]=i;
			a[b][1]=n/i;
			b++;
			}
		}
	for(i=0;i<b;i++){
		if(a[i][0]<=9&&a[i][0]>=1&&a[i][1]<=9&&a[i][1]>=1){
			f=1;
			break;
		}}
	if(f==1||n==1)printf("Yes\n");
	if(f==0&&n!=1) printf("NO\n");
	
	
	
	
	
	
	 
	
	
	
	
	
	
	
	
	
	
	
	
	
} 
