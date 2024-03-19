#include <stdio.h>

int main(){
    long L,R;
    int i,j;
    int ans = 2020;
    scanf("%lu%lu",&L,&R);
    while(L>=2019){
        L = L%2019;
    }
    while(R>=2019){
        R = R%2019;
    }
    
    for(i=L;i<R;i++){
        for(j=i+1;j<=R;j++){
            int sub = i*j;
            while(sub>=2019)sub=sub%2019;
            if(sub<ans){
                ans = sub;
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}