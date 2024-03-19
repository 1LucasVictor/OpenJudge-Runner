#include<stdio.h>
#include<math.h>

int main(void){

int n,d;

scanf("%d %d",&n,&d);

int i,count=0;

int x[n],y[n];

double dis[n];

for(i=0;i<n;i++){
  scanf("%d %d",&x[i],&y[i]);

dis[i]=(double)sqrt((double)pow(x[i],2)+(double)pow(y[i],2));

}

for(i=0;i<n;i++){
  if(dis[i]<=d){count++;}
}

printf("%d",count);

return 0;
}