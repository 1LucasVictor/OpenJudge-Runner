#include<stdio.h>
#include<stdbool.h>

int main(){
 	int a[200010],len=0,sum,t[200010]={0},j,i,n,nb=1;
	scanf("%d",&n);
	
	for(i=2 ; i<=n ; i++)
		scanf("%d",&a[i]);
		
	for(i=2 ; i<=n ; i++){
		t[a[i]]++;
	}
	
	for(i=1 ; i<=n ;i++)
		printf("%d\n",t[i]);
	
	

	
		
	return 0;

}

								
