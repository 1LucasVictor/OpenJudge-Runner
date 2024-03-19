#include <stdio.h>

int main(void)
{
    int n=0,m=0;
    int s[5]={},c[5]={},num[5]={9,9,9,9,9},flag[5]={};
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++){
        scanf("%d %d",&s[i],&c[i]);
    }

    if(n==1){
        printf("%d",min(c,m));
        return 0;
    } else {
        for(int i=0;i<m;i++){
            if(s[i]==1 && c[i]!=0){
                if(c[i]<num[0]){
                    num[0]=c[i];
                    flag[0]=1;
                }
            } else {
                if(c[i]<num[s[i]-1]){
                    num[s[i]-1]=c[i];
                    flag[s[i]-1]=1;
                }
            }
        }
    }
    if(num[0]!=0){
        for(int i=0;i<n;i++){
            if(flag[i]==1){
                printf("%d",num[i]);
            } else {
                printf("0");
            }
        }
    } else {
        printf("-1");
    }
    return 0;
}

int min(int* a,int len){
    int min_=a[0];
    for(int i=0;i<len;i++){
        if(min_>a[i]){
            min_=a[i];
        }
    }
    return min_;
}
