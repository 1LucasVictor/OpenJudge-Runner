#include<stdio.h>

int main(void)
{
    char array[3];
    int ans = 0;
    scanf("%s", array);
    for(int i = 0;i<=2;i++){
        if(array[i]=='1'){
            ans++;
        }
        else;
    }
    printf("%d\n", ans);
    return 0;

}