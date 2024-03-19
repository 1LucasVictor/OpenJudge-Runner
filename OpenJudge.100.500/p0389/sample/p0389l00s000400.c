#include <stdio.h>
#include <string.h>

int main(){
    char ar[1000]={};
    char temp[1000]={};
    int m,h,i,j;
    
    while(1){
        scanf("%s%d",ar,&m);
        if(strcmp(ar,"-")==0) break;
        
        for(i=0;i<m;i++){
        scanf("%d",&h);
        strncpy(temp,ar,h);
        strcpy(ar,ar+h);
        strcat(ar,temp);
        
        for(j=0;j<1000;j++) temp[j]=0;
        }
        printf("%s\n",ar);
    }
    
    return 0;
}
