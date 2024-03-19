#include <stdio.h>

int main(void){
    int i,count=0,t;
    int n=0;
    while(1){
        char ch[200]={},ch1[200]={};
        //??¢?????????????????????????????????
        scanf("%s\n",ch);
        //'-'???????????????????????????
        if(ch[0] == '-'){
            return 0;
        }else{
            //??¢???????????????????????°?????°??????
            count=0;
            for(i=0;i<200;i++){
                if(ch[i]==0){
                    break;
                }else{
                    count++;
                }   
            }
            //printf("%d\n",count);
            n=0;
            scanf("%d",&n);//?????£??????????????°
            //printf("%d\n",n);
            int h[n];
            for(i=0;i<n;i++){
                scanf("%d",&h[i]);
                //printf("%d\n",h[i]);
            }
            //n????????£?????????
            for(i=0;i<n;i++){
                for(t=0;t<count;t++){
                    if(t<(count-h[i])){
                        ch1[t]=ch[h[i]+t];
                    }else{
                        ch1[t]=ch[t+h[i]-count];
                    }
                }
                /*for(t=0;t<count;t++){
                    printf("%c",ch1[t]);
                }
                printf("\n");*/
                for(t=0;t<count;t++){
                    ch[t]=ch1[t];
                }
            }
            //output
            for(i=0;i<count;i++){
                printf("%c",ch[i]);
            }
            printf("\n");
        }
    }
    return 0; /*0?????????*/
}