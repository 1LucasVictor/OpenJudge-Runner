#include<stdio.h>
#include<string.h>
#include<math.h>

int main() {
    int n,t,m,sum=0;
    scanf("%d%d",&n,&t);
    while(t--){
            scanf("%d",&m);
            sum+=m;
    }
    if(sum>=n)
        printf("Yes\n");
    else
        printf("No\n");
}
