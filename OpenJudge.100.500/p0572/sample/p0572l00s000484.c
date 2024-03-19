#include<stdio.h>
int main(void){
    unsigned long long int L,R,i,j,p,min=2019;
    scanf("%lld %lld",&L,&R);
    if(L%2019>R%2019){
        p=L;
        L=R;
        R=p;
    }
    for(i=L%2019;i<R%2019;i++){
        for(j=i+1;j<=R%2019;j++){
            if(min>(i*j)%2019)min=(i*j)%2019;
        }
    }
    printf("%lld\n",min);
    return 0;
}