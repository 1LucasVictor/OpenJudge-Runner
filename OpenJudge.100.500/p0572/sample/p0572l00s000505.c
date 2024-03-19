#include<stdio.h>
int main(){
    int L,R;
    scanf("%d",&L);
    scanf("%d",&R);
    int min=2018;
    int c;
    for(int i=L;i<R;i++){
        for(int j=L;j<=R;j++){
            if(i<j&&j>i){
                c=(i*j)%2019;
                if(min>c){
                    min=c;
                }
            }
        }
    }
    printf("%d\n",min);
    return 0;
}
