#include <stdio.h>

int main(void){
    int n,i;
    scanf("%d\n",&n);
    int s[13]={},h[13]={},c[13]={},d[13]={};
    char mark;
    int num;
    for(i=0; i<n; i++){
        scanf("%c %d\n",&mark,&num);
        //printf("%c %d\n",mark,num);
        switch(mark){
            case 'S':
                s[num]=1;
                break;
            case 'H':
                h[num]=1;
                break;
            case 'C':
                c[num]=1;
                break;
            case 'D':
                d[num]=1;
                break;
        }
    }
    for(i=1;i<=13;i++){
        if(s[i]==0){
            printf("S %d\n",i);
        }
    }
    for(i=1;i<=13;i++){
        if(h[i]==0){
            printf("H %d\n",i);
        }
    }
    for(i=1;i<=13;i++){
        if(c[i]==0){
            printf("C %d\n",i);
        }
    }
    for(i=1;i<=13;i++){
        if(d[i]==0){
            printf("D %d\n",i);
        }
    }
    return 0; /*0?????????*/
}