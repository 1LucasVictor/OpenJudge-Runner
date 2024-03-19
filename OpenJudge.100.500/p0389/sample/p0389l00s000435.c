#include<stdio.h>
#include<string.h>
 
int main(){
    int i,j,k,n,h,ren;
    char card[201],shuf[999],x[201],emp[201];
     
    while(1){
        scanf("%s",card);
        if(card[0]=='-')break;
    ren=strlen(card);
    strcpy(shuf,card);
    scanf("%d",&n);
     
    for(i=0;i<n;i++){
            scanf("%d",&h);
                strncat(shuf,card,h);
        for(j=ren+h;j>=h;j--){
        x[j-h]=shuf[j];
            }
            strcpy(shuf,x);
            strcpy(card,shuf);
        }
        printf("%s\n",shuf);
    }
return 0;
}

