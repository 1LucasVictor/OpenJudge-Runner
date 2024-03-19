#include <stdio.h>

int main(void)
{
    int a,b,c,c_sub_b,b_sub_a;

    scanf("%d %d %d",&a,&b,&c);

    c_sub_b=c-b;
    b_sub_a=b-a;

    if(c_sub_b>0&&b_sub_a>0){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}