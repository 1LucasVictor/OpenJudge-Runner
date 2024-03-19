#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
void b_rot(char s[]){
    int i;
    char buf=s[0];
    size_t last = strlen(s)-1;
    for(i=0;i<last;i++){
        s[i] = s[i+1];
    }
    s[i] = buf;
}
 
int main(){
    char s[200];
    char s_cp[200];
    int i,j,num,block[100];
    while(1){
        scanf("%s",s);
        if(!strcmp(s,"-"))break;
        scanf("%d",&num);
        for(i=0;i<num;i++){
            scanf("%d",&(block[i]));
        }
        for(i=0;i<num;i++){
            for(j=0;j<block[i];j++){
                b_rot(s);
            }
        }
        printf("%s\n",s);
    }
    return 0;
}

