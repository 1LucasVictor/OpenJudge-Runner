#include <stdio.h>


int main(){
    int a,b,i,max;
    scanf("%d %d",&a,&b);
    int ans[3] = {a+b,a-b,a*b};
    
    max = -1000000;
    for(i=0;i<3;i++){
        if(max<ans[i]){
            max = ans[i];
        }
    }
    printf("%d",max);
}
