#include <stdio.h>

int main(void){
    int i,j,min=2019;
    int L,R;
    scanf("%d %d",&L,&R);

    L %= 2019;
    R %= 2019;

    if(L>R||L==0) printf("0\n");
    else{
        for(i=L;i<=R;i++){
            for(j=i+1;j<=R;j++){
                if(min>(i*j)%2019) min = (i*j)%2019;
            }
        }
        printf("%d\n",min);
    }
    return 0;
}