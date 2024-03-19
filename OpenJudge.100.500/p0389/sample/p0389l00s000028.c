#include <stdio.h>
#include <string.h>

int main(){
    char ar[201]={};
    char temp[201]={};
    int m,h,i,j;
    
    while(1){
        scanf("%s%d",ar,&m);
        if(strcmp(ar,"-")==0) break;
        
        for(i=0;i<m;i++){
        scanf("%d",&h);
        for(j=0;j<201;j++) temp[j]=0;
        
        strncpy(temp,ar,h);
        strcpy(ar,ar+h);
        strcat(ar,temp);
        }
        printf("%s\n",ar);
    }
    
    return 0;
}
