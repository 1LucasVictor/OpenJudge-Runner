#include <stdio.h>

int main(void)
{
    int n=0,m=0,zeroflag=0,ketaflag=0,flag=0;
    int s[5]={},c[5]={},num[5]={};
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++){
        scanf("%d %d",&s[i],&c[i]);
    }

    for(int i=0;i<m;i++){
        if(s[i]==1 && c[i]!=0) ketaflag=1;
        if(s[i]==n && c[i]==0) zeroflag=1;
        if(num[s[i]-1]<c[i]) num[s[i]-1]=c[i];
    }

    if(n==1 && zeroflag==1) flag=1;
    else if(ketaflag==1) flag=1;

    if(flag==1){
        for(int i=0;i<n;i++){
            printf("%d",num[i]);
        }
    } else {
        printf("-1");
    }
    return 0;
}
