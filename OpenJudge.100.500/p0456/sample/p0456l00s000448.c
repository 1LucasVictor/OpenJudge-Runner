#include <stdio.h>
#include <string.h>

int main(){
    char s[200000];
    char t[200000];
    int i,j,k=0;

    scanf("%s",s);
    scanf("%s",t);

    i = strlen(s);

    for(j=0;j<i;j++){
        if(strncmp(&t[j],&s[j],1)!=0){
            k++;
        }     
    }
    
    printf("%d\n",k);

    return 0;

}