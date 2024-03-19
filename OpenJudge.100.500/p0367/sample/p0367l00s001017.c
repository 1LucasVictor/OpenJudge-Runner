#include <stdio.h>
int main(void)
{
    int a,b,c,n,cnt;
    scanf("%d %d %d",&a,&b,&c);
    cnt=0;
    for(n=a; n<=b; n++){
        if(c%n==0){
            cnt++;
           
       
        }
        
    }
     printf("%d\n",cnt);
     
    return 0;
}

