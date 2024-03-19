#include<stdio.h>
int p[100000],l;
void prime(){
    int i,j,k;
    p[0]=2;
    l++;
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
}
int main(void){
	int i,a,cnt=0;
	prime();
	while(scanf("%d",&a)!=EOF){
	    for(i=0;p[i]<=a;i++);
	    printf("%d\n",i);
	}
	return 0;
}