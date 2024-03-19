#include <stdio.h>
int main(){
    int k,i[100],c=0;
    while(1){
        scanf("%d",&k);
        if(k==0&&c!=0){
            printf("%d\n",i[c-1]);
            c--;
        }else if(k!=0&&k<=10){
            i[c]=k;
            c++;
        }else break;
    }
    return 0;
}