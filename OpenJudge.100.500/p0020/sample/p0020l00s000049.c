#include <stdio.h>

int main(){
	int n,i,j,a[100];
	float x1,y1,x2,y2,x3,y3,x4,y4,b,c;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%f %f %f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
		b=(y2-y1)/(x2-x1);
		c=(y4-y3)/(x4-x3);
		if(b==c){
			a[i]=1;
		}else{
			a[i]=2;
		}
	}
	for(i=0;i<n;i++){
		if(a[i]==1){
			printf("YES\n");
		}else if(a[i]==2){
			printf("NO\n");
		}
	}
	return 0;
}