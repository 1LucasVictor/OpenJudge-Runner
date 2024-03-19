#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int flag=0;
    for(i=1;i<=9;i++){
        for(j=9;j>=1;j--){
            if(i*j==n){
                flag++;
                printf("Yes\n");
                break;
            }
            if(flag>0)
                break;
        }
    }
    if(flag==0)
        printf("No\n");
return 0;
}
