#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define TIME 3

int main(void){
int n,m,s[6],c[6];
int same[10][10];
scanf("%d %d",&n,&m);

for(int i=0;i<m;i++){
    scanf("%d %d",&s[i],&c[i]);
}

//same S search

for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
        if((s[i]==s[j])&&(c[i]!=c[j])){printf("-1\n");return 0;}
    }
}

//ignore 05 005 etc

for(int j=0;j<m;j++){
    if(s[j]==1&&c[j]==0&&n!=1){printf("-1\n");return 0;}
}

int keta=1;
for(int i=0;i<m;i++){
    int min=99;
    for(int j=0;j<m;j++){
        if(s[j]==keta&&c[j]<=min){min=c[j];}
    }
    if(min==99){
        if(i==0){printf("1");}
        else{
        printf("0");
        }
    }
    else{printf("%d",min);}
    keta++;
}



}