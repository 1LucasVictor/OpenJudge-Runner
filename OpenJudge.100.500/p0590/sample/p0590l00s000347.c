#include <stdio.h>
int main(void){
    int num[5];
    int jd;
    
    int result=0;
    
    for(int i=0; i<5; i++)scanf("%d", &num[i]);
    scanf("%d", &jd);
    
    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(num[j]-num[i]>jd)
            {
                result=1;
                break;
            }
        }
    }
    
    if(result==0)printf("Yay!\n");
    else printf(":(\n");
    
    return 0;
}