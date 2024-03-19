#include<stdio.h>

int main(void)
{
    char s;
    int i;
    int ans=0;
    for(i=0;i<3;i++){
        scanf("%c",&s);
        if(s=='1'){
            ans++;
        }
    }

    printf("%d\n",ans);
    return 0;
}