#include<stdio.h>

int main(){


        char s[4];
        scanf("%s",s);
        int loop;
        int count=0;

        for(loop=0; loop < 3; loop++){
                if(s[loop] == '1'){
                        count++;
                }
        }

        printf("%d\n",count);

        return 0;
}