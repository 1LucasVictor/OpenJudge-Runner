#include<stdio.h>
#include<string.h>

int main(void){
    int count[100]={0};
    char raw[200];
    int i,k,n,p,l;
    unsigned long len;
    char tmp[100];
    char end[]="-";
    
    while(1){
        scanf("%s",raw);
        if(strcmp(&*end,raw)==0)
            break;
        len=strlen(raw);
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&count[i]);
            for(k=0;k<count[i];k++){
                tmp[k]=raw[k];
            }
            for(l=0;l<len-count[i];l++){
                raw[l]=raw[count[i]+l];
            }
            for(p=0;p<count[i];p++){
                raw[len-count[i]+p]=tmp[p];
            }
        }printf("%s\n",raw);
    }
    return 0;
}