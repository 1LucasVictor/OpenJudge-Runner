#include <stdio.h>
#include <string.h>
void shuffle(char *str, int n, int size){
    char ho[400]="";int i;
    strcat(ho,str);strcat(ho,str);
    for(i=n;i<n+size;i++) str[i-n]=ho[i];
}
int main(void){
    char target[10][200];
    int m,i,len,sh,cnt=0;
    while (1){
        scanf("%s",target[cnt]);
        if (target[cnt][0]=='-') break; 
        scanf("%d",&m);
        len=strlen(target[cnt]);   
        for(i=0;i<m;i++){scanf("%d",&sh);shuffle(target[cnt],sh,len);}
        cnt++;
    }   
    for(i=0;i<cnt;i++) printf("%s\n",target[i]);
    return 0;
}

