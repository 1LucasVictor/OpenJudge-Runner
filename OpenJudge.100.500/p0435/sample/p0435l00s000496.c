#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
int n,d;
int yes=0;
long double ans;
int x[200005],y[200005];
scanf("%d %d",&n,&d);

for(int i=0;i<n;i++){
    scanf("%d %d",&x[i],&y[i]);
}

for(int i=0;i<n;i++){
    ans=sqrt((long double)x[i]*(long double)x[i]+(long double)y[i]*(long double)y[i]);
    if(ans<=(long double)d){yes++;}
}
printf("%d\n",yes);

}
