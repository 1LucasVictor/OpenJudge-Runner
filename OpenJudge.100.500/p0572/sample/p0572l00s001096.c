#include<stdio.h>
int main(){
    int L,R;
    scanf("%d",&L);
    scanf("%d",&R);
    int min=2018;
    int c,d,e;
    for(int i=L;i<R;i++){
        for(int j=L;j<=R;j++){
            if(i<j){
                d=i%2019;
                e=j%2019;
                c=d*e;
                if(min>c){
                    min=c;
                }
            }
        }
    }
    printf("%d\n",min);
    return 0;
}
