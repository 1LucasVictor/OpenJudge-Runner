#include <stdio.h>
int main(void){
    char buf[1000];
    scanf("%s",buf);
    int flg=0;
    for(int i=0;i<3;i++){
        if(buf[i]==55)flg=1;
    }
    if(flg==1){printf("Yes\n");}else{printf("No\n");}
    //printf("%d\n",buf[2]);
    return 0;
}