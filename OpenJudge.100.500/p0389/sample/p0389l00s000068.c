#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    //カードの現状とシャッフル後
    char text[201],fin[201];
    int n,shu;
    int j;
    while(1){
        //対象文字列とシャッフル回数の読み込み
        scanf("%s %d",text,&n);
        if(!strcmp(text,"-")) break;
        
        for(int i=0;i<n;i++){
            scanf("%d", &shu);
            for(j=shu; text[j]!='\0'; j++){
                fin[j-shu] = text[j];
                
            }
            
            for(int k=0; k < shu; k++){
                fin[j-shu+k] = text[k];
                
            }
            
            for(j=0; text[j]!='\0'; j++){
                text[j] = fin[j];
                
            }
            
        } 
        printf("%s\n",text);
    }
}
