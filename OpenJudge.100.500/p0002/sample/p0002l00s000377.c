#include <stdio.h>
int main(void)
{
    int i,N;
    int a,b,c,a2,b2,c2;

    scanf("%d",&N);

    for(i=0;i<N;i++){
        scanf("%d %d %d",&a,&b,&c);

        a2=a*a;
        b2=b*b;
        c2=c*c;

        if(a2==b2+c2 || b2==c2+a2 || c2==a2+b2){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        
    }

    return 0;
}
