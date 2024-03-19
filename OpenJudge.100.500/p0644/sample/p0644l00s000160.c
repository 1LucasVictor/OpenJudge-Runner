#include <stdio.h>
int main(){
    char s[9];
    int i,c=0;
    scanf("%s",s);
    for(i=0;i<3;i++){
     if(s[i]=='1'){
       c+=1;
     }
    }
    printf("%d\n",c);
    return 0;
}