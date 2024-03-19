#include<stdio.h>
int main(){
    int i, j, n, a[200000], m, MAX=-2147483648;
    scanf("%d", &n);
    for(i=0; i<n; i++)scanf("%d", &a[i]);
    for(i=0; i<n; i++)for(j=0; j<i; j++){
            m=a[i]-a[j];
            if(m>MAX)MAX=m;
    }
    printf("%d\n", MAX);
    return 0;
}