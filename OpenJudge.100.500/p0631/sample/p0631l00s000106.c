#include <stdio.h>
int main()
{
    int cat,B,all;
    scanf("%d %d %d",&cat,&B,&all);
    if(cat>all){
        printf("NO\n");
    }else if(cat + B >= all){
        printf("YES\n");
    }else{
        printf("NO");
    }

    return 0;
}