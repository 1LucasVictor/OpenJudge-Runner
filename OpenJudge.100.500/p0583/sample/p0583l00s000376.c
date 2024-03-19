#include<stdio.h>

int main(void){
  int n;
  int a;
  int b;
  int c;
  int d;
  scanf("%d", &n);
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);
  char road[n];
  scanf("%s", road);
  int i;
  if(c<d){
    printf("Yes");
  }else{
    int count = 0;
    int three[n];
    int threeidx = 0;
    for(i=0;i<n;i++){
      if(road[i]=='.'){
        count++;
      }else if(i==b){
        if(count == 1){
          count++;
        }
      }else{
        count = 0;
      }
      if(count == 3){
        three[threeidx] = i;
        threeidx++;
        //printf("ここは三点連続idx:%d\n",i);
        count = 0;
      }
    }
    for(i=0;i<threeidx;i++){
      //printf("%d番目は%d", i, three[i]);
      if(b-1<three[i]&&three[i]<=c-1){
        printf("Yes");
        return 0;
      }
    }
    printf("No");
    return 0;
  }
}