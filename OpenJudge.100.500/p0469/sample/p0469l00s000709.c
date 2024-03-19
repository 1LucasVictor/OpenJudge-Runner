#include<stdio.h>
int main(){
	int a,b,k;
	scanf("%d",&k);
	scanf("%d%d",&a,&b);
    int f=0;
    for(int i=a;i<=b;i++){
    	if(i%k==0){
    		f=1;
    		break;
		}
	}
	if(f) printf("OK");
	else printf("NG");
	return 0;
}