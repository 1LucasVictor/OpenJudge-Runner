#include<stdio.h>

int main(){
    int L,R,i,j,mod_calc;
    int mod_min=2019;
    int zero_judge=0;
    scanf("%d %d",&L,&R);
    for(i=L;i<R;i++){
        if(zero_judge==1){
            break;
        }else{
            for(j=i+1;j<R+1;j++){
                mod_calc=(i*j)%2019;
                if(mod_calc<mod_min){
                    mod_min=mod_calc;
                    if(mod_min==0){
                        zero_judge=1;
                        break;
                    }
                }
            }
        }
    }

    printf("%d\n",mod_min);
    return 0;
}