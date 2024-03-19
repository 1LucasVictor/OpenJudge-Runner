#include <stdio.h>

int main()
{
    int N,j;
    int i,isprime=0;
    scanf("%d",&N);
    float t=0;
    for(i=1;i<=9;i++){
        if(N%i==0)
            for(j=1;j<=9;j++)
            {
                t=(float)N/(float)j;
                if((t==1.0)||(t==2.0)||(t==3.0)||(t==4.0)||(t==5.0)||(t==6.0)||(t==7.0)||(t==8.0)||(t==9.0))
                {isprime=1; break;}
            
            }
            break;
        
    }
    if(isprime==1) printf("Yes");
    else printf("No");
    return 0;
}
