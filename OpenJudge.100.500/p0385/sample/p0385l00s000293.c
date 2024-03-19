#include <stdio.h>

int main()
{
    while(1){
        char num[1001] = {0};
        int i, sum=0;
        
        scanf("%s", num);
        if(num[0]=='0') break;
        
        for(i=0; num[i]!='\n'; i++){
            switch(num[i]){
                case '1': sum+=1; break;
                case '2': sum+=2; break;
                case '3': sum+=3; break;
                case '4': sum+=4; break;
                case '5': sum+=5; break;
                case '6': sum+=6; break;
                case '7': sum+=7; break;
                case '8': sum+=8; break;
                case '9': sum+=9; break;
                case '0': sum+=0; break;
                default: break;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}