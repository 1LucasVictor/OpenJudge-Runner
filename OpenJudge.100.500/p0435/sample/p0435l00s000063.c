#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<stdio.h>

#define MAX 250000
void main()
{
     int N;
     int D;
    if(scanf("%d %d",&N,&D)<2){
        exit(1);
    }


    float P;

    int X[MAX];
    int Y[MAX];
    int ans=0;

    for(int i=0;i<N;i++){ 
        if(scanf("%d %d", &X[i],&Y[i])<2){
            exit(1);
        }
    }

    for(int i=0;i<N;i++){ 
        if(D>=sqrt((X[i]*X[i])+(Y[i]*Y[i])))
            ans++;
    }

    printf("%d",ans);
}