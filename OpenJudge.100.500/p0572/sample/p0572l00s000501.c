#include<stdio.h>
int main(void){
    int L,R,i,j,p,min=2019;
    scanf("%d %d",&L,&R);
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
    printf("%d\n",min);
    return 0;
}