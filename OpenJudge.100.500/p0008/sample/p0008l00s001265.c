#include<stdio.h>
int p[1000000];
int main(void){
	int i,j,k,a,l=1;
    p[0]=2;
    for(i=3;i<=999999;i+=2){
        k=1;
        for(j=0;j<l;j++){
            if(p[j]*p[j]>i)break;
            if(i%p[j]==0){
                k=0;
                break;
            }
        }
        if(k==1){
            p[l++]=i;
        }
    }
	while(scanf("%d",&a)!=EOF){
	    for(i=0;i<l;i++)if(p[i]>a)break;
	    printf("%d\n",i);
	}
	return 0;
}