#include <stdio.h>
int main(){
        char str[20];
        int i,j;
        i = 0;
        while(scanf("%c",&str[i]) != EOF){
                i++;
        }
        for(i>0;i--;){
                printf("%c",str[i]);
        }
        printf("\n");
return 0;
}