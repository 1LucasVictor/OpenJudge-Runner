#include<stdio.h>
#include<math.h>
int main(){
    int n,d;
    long long int x[200000];
    long long int y[200000];
    int count=0;
    scanf("%d %d",&n,&d);
    for(int i=0;i<n;i++){
        scanf("%llu",&x[i]);
        scanf("%llu",&y[i]);
    }
    for(int i=0;i<n;i++){
      if(sqrt(x[i]*x[i]+y[i]*y[i])<=d){
        count=count+1;
      }
    }
    printf("%d\n",count);
}