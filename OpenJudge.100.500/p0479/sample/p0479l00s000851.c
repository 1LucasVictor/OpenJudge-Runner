#include<stdio.h>

int main(void){

    int numWorker;
    int senpai[200001];

    int indexCheck=1;

    int counter = 1;

    //入力部分
    scanf("%d",&numWorker);
    for(int i=1;i<numWorker;i++){
        scanf("%d",&senpai[i]);
    }

    //計算部分

    //出力部分
    for(int i=1;i<numWorker-1;i++){
        if(senpai[i+1]!=senpai[i]){
            printf("%d\n",i-indexCheck+1);
            indexCheck = i+1;
            counter++;
        }
    }
    printf("%d\n",numWorker-indexCheck);
    for(int i=1;i<=numWorker-counter;i++)printf("0\n");
}