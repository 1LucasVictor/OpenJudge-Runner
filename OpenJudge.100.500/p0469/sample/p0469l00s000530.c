#include<stdio.h>
int main()
{
    int k,a,b,i,cnt=0;
    scanf("%d\n %d %d",&k,&a,&b);
    for(i=a;i<=b;i++){
        if(i%k==0)cnt++;
    }
    if(cnt>0){
        printf("OK\n");
    }
    else {
        printf("NG\n");
    }
    return 0;
}
