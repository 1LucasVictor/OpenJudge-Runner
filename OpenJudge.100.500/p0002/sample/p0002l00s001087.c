#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,c,k,i;
    scanf("%d",&k);
    for(i=0;i<k;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==b*b+a*a)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}