#include <stdio.h>
int main(void){
    int a,b,c,j;
    int count=0;
    scanf("%d %d %d",&a,&b,&c);
    for(j=1;j<c;j++){
        if(c%j==0 && a<=j && j<=b){
            count++;
        }
        
    }
    printf("%d\n",count);
    return 0;
}
