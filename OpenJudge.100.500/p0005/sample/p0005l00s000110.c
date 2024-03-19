#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(int argc, const char * argv[]){
    
    int f = 0,len;
    char ch[21],temp;
    scanf("%s",ch);
    len = (int)strlen(ch) - 1;
    //ch[(int)strlen(ch)] = "\0";
    
    while(1){
        if(len < f || len == f ){
            printf("%s\n",ch);
            break;
        }
        temp = ch[len];
        ch[len] = ch[f];
        ch[f] = temp;
        //printf("%s\n",ch);
        f++;
        len--;
    }
    
    //printf("%s\n",ch);
    return 0;
}