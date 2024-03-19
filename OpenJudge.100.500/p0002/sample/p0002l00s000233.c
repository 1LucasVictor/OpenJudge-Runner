#include <stdio.h>

int main(){
	int a,b[3],c,i,j,k,l;
	scanf("%d",&a);
	for(l=0;l<a;l++){
		scanf("%d %d %d",&b[0],&b[1],&b[2]);
		for(j=0;j<3;j++){
			for(k=0;k<2;k++){
				if(b[k]<=b[k+1]){
					c=b[k];
					b[k]=b[k+1];
					b[k+1]=c;
				}
			}
		}
		for(i=0;i<3;i++){
			b[i]=b[i]*b[i];
		}
		if(b[0]==b[1]+b[2]){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}