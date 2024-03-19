#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char buf[30];
    int X,A,B;

    //scanf("%d %d %d",&X,&A,&B);
    fgets(buf,sizeof(buf)+1,stdin);
    X = atoi(strtok(buf ," "));
    A = atoi(strtok(NULL," "));
    B = atoi(strtok(NULL," "));

    if(B-A<=0) printf("delicious\n");
    else if(B-A >= X+1) printf("dangerous\n");
    else printf("safe\n");

    return 0;
}