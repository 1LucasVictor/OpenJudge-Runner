#include<stdio.h>
#define N 3

struct{int a,b;} d[N];

int main(){
    int i,j,s,k;
    for(i=0;i<3;scanf("%d %d",&d[i].a,&d[i].b),i++);
    for(i=0;i<3;i++){        
        s=d[i].a+d[i].b;
        for(j=1,k=0; s>=j; j*=10,k++);
        printf("%d\n",k);        
    }
    return 0;
}