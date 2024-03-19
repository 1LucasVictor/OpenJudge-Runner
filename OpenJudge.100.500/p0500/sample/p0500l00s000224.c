/*
 * FileName:     C
 * CreatedDate:  2020-03-01 21:29:02 +0900
 * LastModified: 2020-03-02 01:51:25 +0900
 */

#include <stdio.h>

int main(void){
    int N,M,i;
    scanf("%d %d",&N,&M);
    int s[M],c[M];
    int box[N],flag=0;
    for(i=0;i<N;i++){
        box[i]=10;
    }
    for(i=0;i<M;i++){
        scanf("%d %d",&s[i],&c[i]);
        if(box[s[i]-1]>c[i]){
            box[s[i]-1]=c[i];
        }
    }
    if(box[0]==10 || (N>1 && box[0]==0)){
        printf("-1\n");
        return 0;
    }
    for(i=0;i<N;i++){
        if(box[i]==10){
            box[i]=0;
        }
        printf("%d",box[i]);
    }
    printf("\n");


    return 0;
}
