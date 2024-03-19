#include<stdio.h>
int a[10] = {0};
int main()
{
    int b,c,d;
    scanf("%d%d%d",&b,&c,&d);
    a[b]++;
    a[c]++;
    a[d]++;
    if(a[5] == 2 && a[7]==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;

}