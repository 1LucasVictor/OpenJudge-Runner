#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    long long int L,R;
    scanf("%lld %lld",&L,&R);
    if(R-L>3000)printf("0\n");
    //L=L%2019;
    //R=R%2019;
    long long int min=2018;
    for(int i=L;i<R;i++){
        for(int j=L+1;j<R+1;j++){
            if(min > ((i*j)%2019))min=((i*j)%2019);
        }
    }
    printf("%d",min);
 
}