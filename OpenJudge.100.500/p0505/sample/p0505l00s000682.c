#include<stdio.h>
int main()
{
    int n, t, m, mt=0;
    scanf("%d %d", &n, &m);
    while(m--){
        scanf("%d", &t);
        mt += t;
    }
    if(mt>=n) printf("Yes\n");
    else printf("No\n");

    return 0;
}

