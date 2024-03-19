#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    long long int L,R;
    scanf("%lld %lld",&L,&R);
    L=L%2019;
    R=R%2019;
    int min=2019;
    for(int i=L;i<R;i++){
        for(int j=L+1;j<R+1;j++){
            if(min > ((i*j)%2019))min=((i*j)%2019);
        }
    }
    printf("%d",min);
}