#include<stdio.h>
#include<string.h>
int main(){
    int n,m;
    int i,j,x;
    char card_b[201],card_a[201]={0,};
    while(1){
        scanf("%s",card_b);
        //printf("%d\n",strlen(card_b));
        if(strcmp(card_b,"-")==0){
            break;
        }
        scanf("%d",&m);
        for(j=0,i=0;i<m;i++){
            scanf("%d",&n);

            for(j=n,x=0;j<strlen(card_b);j++,x++){
                card_a[x]=card_b[j];
            }

            for(j=0;n!=0;n--,j++){
                card_a[strlen(card_b)-n]=card_b[j];
            }
            card_a[strlen(card_b)]=0;
            strcpy(card_b,card_a);
        }
        printf("%s\n",card_b);
    }
    return 0;
}
