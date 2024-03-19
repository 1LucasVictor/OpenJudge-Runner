#include <stdio.h>

main(){
    int N,a,b,c,i;


    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(a*a==b*b+c*c || b*b==c*c+a*a || c*c==a*a+b*b)
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}