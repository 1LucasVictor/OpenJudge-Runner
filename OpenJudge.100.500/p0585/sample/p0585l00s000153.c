#include <stdio.h>

int main (){
    
    int a,b,t,m=1,bis=0,i=0;
    
    scanf("%d %d %d",&a,&b,&t);
    
    for(i=1;i <= t;i++){
        if(m % a == 0 && m != 0){
            bis += b;
        }   
        m++;
    }
    
    printf("%d",bis);
    return 0;
}
