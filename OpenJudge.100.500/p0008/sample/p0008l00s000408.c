#include <stdio.h>
int main(){
    int i,j,ch[1000000];

    for(i=0;i<1000000;i+=2){ch[i]=0;ch[i+1]=1;}

    ch[1]=0;
    ch[2]=1;

    for(i=3;i<1000;i+=2) if(ch[i]) for(j=i+i;j<1000000;j+=i) ch[j]=0;

    for(i=3;i<1000000;i++) ch[i]+=ch[i-1];

    while(scanf("%d",&i)!=EOF) printf("%d\n",ch[i]);

    return 0;
}