#include <stdio.h>
int main(void){


    int a,b,c,i,z,count=0;
    
    scanf("%d %d %d",&a,&b,&c);
        for(i=a;i<=b;i++){
        z=c%i;
            if(z==0){
                count++;
            }
        }       
        printf("%d\n",count);
                
    return 0;
}
