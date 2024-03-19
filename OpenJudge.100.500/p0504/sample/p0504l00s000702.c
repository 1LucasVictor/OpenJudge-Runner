#include<stdio.h>
int main()
{
    int H,A,ans1,ans2;
    scanf("%d%d", &H, &A);
    ans1 = H%A;
    ans2 = H/A;
    if(ans1==0){
    printf("%d", ans2);
    }else{
        printf("%d", ans2+1);
    }
    return 0;

}
