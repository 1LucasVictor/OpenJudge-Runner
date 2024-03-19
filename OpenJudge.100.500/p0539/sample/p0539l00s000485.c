#include <stdio.h>

int main(void){
    int inp,i;
    scanf("%d",&inp);
    for(i=1;i<=9;i++)
        if((inp/i)>=1&&(inp/i)<=9)
            if(((float)inp/(float)i)-(inp/i)==0)
                break;
    if(i==10)
        printf("No");
    else
        printf("Yes");
    return 0;
}
