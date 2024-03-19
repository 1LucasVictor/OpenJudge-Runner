#include<stdio.h>
#define Q 10
int main(void){
    int L,R,i,j,p,min=2019;
    scanf("%d %d",&L,&R);
    for(i=L%2019;i<R%2019;i++){
        for(j=i+1;j<=R%2019;j++){
            if(min>(i*j)%2019)min=(i*j)%2019;
            if((i*j)%2019 ==2018 && j+1<R){
                min=0;
                break;
            }
        }
        if((i*j)%2019 ==2018 && j+1<R){
            min=0;
            break;
        }
    }
    printf("%d\n",min);
    return 0;
}