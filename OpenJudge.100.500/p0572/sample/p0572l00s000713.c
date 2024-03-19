#include<stdio.h>
#include<math.h>


int main(){
    int L,R;
    int L_mod,R_mod;
    int divier = 2019;
    int i,j;
    int min = 20000;
    L_mod = L % divier;
    R_mod = R & divier;
    scanf("%d %d",&L,&R);
    if(R - L > divier)
        printf("0");
    else{
        for(i = L ; i <R;i++){
            for(j = i + 1 ; j <= R ; j++){
                if(min > (i*j) %divier)
                    min = (i*j) %divier;
                if(min == 0){
                    printf("0");
                    return 0;
                }
            }
        }
        printf("%d",min);
    }
    
    return 0;
    
}
