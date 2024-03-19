#include <stdio.h>
int main(){
    int n;
    int MIN=100000000;
    int MAX=-100000000;
    long long SUM=0;
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int t;
        scanf("%d",&t);
        if(t<MIN) MIN=t;
        if(t>MAX) MAX=t;
        SUM+=t;
    }
    printf("%d %d %ld\n",MIN,MAX,SUM);
    return 0;
}
