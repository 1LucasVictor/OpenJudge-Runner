#include <stdio.h>
int main(){
    int n,i,l,m,k,s,p;
    scanf("%d%d%d",&n,&m,&k);
    s=k;
    if(n%k==0&&m%k==0){
        printf("%d\n",k);
    }else {
        while (l == 0 && p == 0) {
            l = n % s;
            p = m % s;
        }
        s++;
        printf("%d\n", s);
    }
    return 0;
}