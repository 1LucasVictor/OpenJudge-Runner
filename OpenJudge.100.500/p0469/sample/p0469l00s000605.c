#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	int k;
	scanf("%d",&k);
	float a,b,x,y;
	scanf("%f %f",&a,&b);
	x=a/k;
	y=b/k;
	int i,t=0;
	for(i=floor(x);i<=floor(y);i++){
		if(i>=x && i<=y) {
			t=1;break;
        }
	}
	if(t==1) printf("OK");
	else printf("NG");
	return 0;
}