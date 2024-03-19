#include <stdio.h>
#include <string.h>

int main(){
int a[1001],b[1001],c[1001];
int i;
int n;
scanf("%d",&n);
for(i=0;i<n;i++){
	
	
	scanf("%d%d%d",&a[i],&b[i],&c[i]);
	
		if(a[i]*a[i]+b[i]*b[i]==c[i]*c[i]){
		
		printf("YES\n");
		
		
		
		
	}else{
		printf("NO\n");
		
		
		
	}
	
}
/*for(i=0;i<n;i++){
	if(a[i]*a[i]+b[i]*b[i]==c[i]*c[i]){
		
		printf("YES\n");
		
		
		
		
	}else{
		printf("NO\n");
		
		
		
	}
	
	
	
	
}*/

	return 0;
}