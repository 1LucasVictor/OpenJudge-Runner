#include<stdio.h>
#include<string.h>
int main(){
    int n1=0,n2=0,i;
    char *s=(char*)malloc(50000*sizeof(char));
    scanf("%s",s);
    for(i=0;i<strlen(s);i++){
        if(s[i]=='0') n1++;
        else n2++;
    }
    if(n1>=n2){
        printf("%d",2*n2);
    }
    else{
        printf("%d",2*n1);
    }
    return 0;
}
