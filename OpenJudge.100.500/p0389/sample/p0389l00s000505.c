#include <stdio.h>
#include <string.h>

int main(){
    int m, h;
    char cards[256], temp[256], result[256];
    int i, j=0, len;

    while(1){
        scanf("%s", cards);//??\???
        len=strlen(cards);//???????????????
        if(strcmp(cards, "-")==0&&len==1)break;//???????????????
        scanf("%d", &m);//?????£??????????????°
        
	for(;m>0;m--){
            scanf("%d", &h);//????????????????????°
            strcpy(temp, cards);//?????´
            for(i=0;i<h;i++){
                cards[len-h+i]=temp[i];// 255 a 
            }
            for(i=0;i<len-h;i++){	
                cards[i]=temp[i+h];	//a a b c?????????a
            }
        }

        for(i=0;i<len;i++){
            result[j++]=cards[i];      //a a b c   a
        }
        result[j++]='\n';
    }
    result[j]='\0';
    printf("%s", result);

    return 0;
}