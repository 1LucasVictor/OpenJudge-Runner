#include <stdio.h>
int main(void){
    int a,b,ans;
    
    scanf("%d%d",&a,&b);
    
    ans=a*b;
    
    if((1<=a)&&(a<10)&&(1<=b)&&(b<10)){
        printf("%d\n",ans);
    }else{
        printf("-1");
    }
    
    return 0;
    
}
