#include <stdio.h>
 
int main(int argc, const char * argv[])
{
    int H,A,t;
     
    scanf("%d%d",&H,&A);
     
    if (H%A==0) {
        t=H/A;
    }
    else{
        if(A>H)
            t=1;
        else{t=H/A+1;}
    }
    printf("%d",t);
    
    return 0;
}
