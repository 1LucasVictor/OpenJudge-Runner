#include<stdio.h>
#include<string.h>
int main(void){
    int n,ans=0;
    scanf("%d",&n);
    for(int i=1;9>=i;++i){
        for(int j=1;9>=j;++j){
            if(i*j==n)
            ++ans;
        }
    }
    if(ans>0)
    printf("Yes");
    else
    {
        printf("No");
    }
    
    return 0;
}