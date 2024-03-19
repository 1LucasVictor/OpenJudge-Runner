#include<stdio.h>

int main(){
	int a,b,c,aa[100],n,i;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d %d %d",&a,&b,&c);
		if(a>1000||b>1000||c>1000)exit(0);
		if((c*c)==((a*a)+(b*b))) aa[i]=1;
		else if((a*a)==((b*b)+(c*c))) aa[i]=1;
		else if((b*b)==((a*a)+(c*c))) aa[i]=1;
		else aa[i]=0;
		
	}
	
	for(i=0;i<n;i++){
		if(aa[i]==0){
			printf("NO\n");
		}else if (aa[i]==1) {
			printf("YES\n");
		}
	}
	
	
	return 0;
}