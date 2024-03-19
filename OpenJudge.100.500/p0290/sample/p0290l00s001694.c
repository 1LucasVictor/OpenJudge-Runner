#include<stdio.h>
#include<math.h>

int main(){
    int i,j,k,n,count = 0,flag = 0;

    scanf("%d",&i);

    for(j = 0;j < i;j++){
        scanf("%d",&n);
        if((n%2) == 0){
            if(n == 2) {
              count++;
            }
            continue;
        }
        flag = 0;
        for(k = 1;(2*k+1) <= sqrt(n);k++){
            if((n%(2*k+1)) == 0){
              flag = 1;
              break;
            }
        } count++;
        if(flag == 1) count--;
    }
    printf("%d\n",count);
    return 0;
}
