#include<stdio.h>
int main(void){
	long int a,b,c,k;
    int i,sum=0;
    scanf("%ld%ld%ld%ld",&a,&b,&c,&k);
    if(k<=a){
        printf("%d",k);
        return 0;
    }else if(k<=a+b){
        printf("%d",a);
        return 0;
    }else{
        k=k-(a+b);
        for(i=0;i<k;i++){
            a--;
        }
        printf("%d",a);
        return 0;
    }
	return 0;
}
