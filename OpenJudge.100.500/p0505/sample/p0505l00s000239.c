#include<stdio.h>
int main()
{
    int h,n,flag=0,s,i,sum=0;
    scanf("%d %d",&h,&n);
    for(i=0;i<n;i++){
        scanf("%d",&s);
        sum+=s;
        if(h<sum){
            flag=1;
        }
    }
    if(flag==1){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
