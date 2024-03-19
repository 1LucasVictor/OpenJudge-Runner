#include <stdio.h>
#include <string.h>

int main(void){
    char str[1001]={};
    char ins[1001]={};
    char re[1001]={};
    char temp[1001]={};
    int a=0,b=0,q,i;

    scanf("%s", str);
    scanf("%d", &q);
    while(q--){
        scanf("%s %d %d",ins,&a,&b);
        if(strcmp(ins,"replace") == 0){
            scanf("%s", re);
            for(i=0;i<b-a+1;i++) str[i+a] = re[i];
        }
        else if(strcmp(ins,"reverse") == 0){
            strncpy(temp,str,strlen(str));
            temp[strlen(str)] = '\0';
            for(i=0;i<=(b-a);i++) str[a+i] = temp[b-i];
        }
        else{
            for(i=a;i<=b;i++) printf("%c", str[i]);
            puts("");
        }
    }
    return(0);
}