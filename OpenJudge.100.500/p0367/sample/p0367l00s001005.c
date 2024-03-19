#include <stdio.h>
int main(){
    int a,b,x,i=0;
    scanf("%d %d %d",&a,&b,&x);
    
    while(a<=b){
        
        if(x%a ==0) i++;
        a++;
    }
    printf("%d\n",i);
    return 0;
}
