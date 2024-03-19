#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    int t,i,h,j,p,q;
    int len;
    char s[201];
    char temp[201];
    while(1){
        scanf("%s",s);//?????????
        if(s[0]=='-'){
            break;
        }
        len=strlen(s);
        scanf("%d",&t);//?????£??????????????°
        for(i=1;i<=t;i++){
            scanf("%d",&h);//??\???????????????
            for(j=0;j<h;j++){
                temp[j]=s[j];
            }
            for(p=0;p<len-h;p++){
                s[p]=s[h+p];
            }
            for(q=0;q<h;q++){
                s[len-h+q]=temp[q];
            }
            
        }printf("%s\n",s);
    }memset(s, '\0', sizeof(s));
    memset(temp, '\0', sizeof(temp));
    
    
    return 0;
}