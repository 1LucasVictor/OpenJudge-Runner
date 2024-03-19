#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int main(void){
    char s[100],ss[100];
    int dif=0;
    scanf("%s",s);
    scanf("%s",ss);
    for(int i=0;i<strlen(s)||i<strlen(ss)-1;i++){
        if(s[i]!=ss[i]){dif++;}
    }
    if(dif==0){printf("Yes");}
    else{printf("No");}
}
