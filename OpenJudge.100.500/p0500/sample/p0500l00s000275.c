#include<stdio.h>

int main(void)
{
    int n,m,s,c,i;
    scanf("%d%d",&n,&m);
    int num[n];
    int ans=0;

    for(i=0;i<n;i++)
        num[i] = -1;

    for(i=0;i<m;i++){
        scanf("%d%d",&s,&c);
        if(num[s-1] == -1 || num[s-1] == c)
            num[s-1] = c;
        else ans = -1;
    }

    if(num[0] == 0){
        if(n == 3)
            ans = -1;
        if(num[1] == 0)
            if(n == 2)
                ans = -1;
    }

    if(num[0] == -1){
        if(n==3)
            num[0] = 1;
        if(num[1] == -1)
            if(n==2)
                num[1]=1;
    }

    if(ans == -1)
        printf("-1");
    
    else{
        for(i=3-n;i<n;i++){
            if(num[i] == -1)
                printf("0");
            else
                printf("%d",num[i]);
        }
    }
    return 0;

}