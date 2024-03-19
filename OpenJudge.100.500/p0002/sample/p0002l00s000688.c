#include<stdio.h>
int main(void){

    int i,j,k,l,n;
    scanf("%d", &n);

    for(i=1;i<=n;i++){

        scanf("%d %d %d", &j, &k, &l);
        if((j*j)==(k*k)+(l*l))printf("YES\n");
        else if((k*k)== (j*j)+(l*l))printf("YES\n");
        else if((l*l)==(j*j)+(k*k))printf("YES\n");
        else printf("NO\n");

    }

    return 0;


}