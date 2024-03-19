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
    int count = 0;
    int rockcount;
    for(i=0;i<n;i++){
      if(road[i]=='.'){
        rockcount = 0;
        count++;
      }else{
        rockcount++;
        count = 0;
      }
      if(rockcount==2){
        if(i-1<=c||i-1<=d){
          printf("No");
          return 0;
        }
      }
    }
    printf("Yes");
    return 0;
  }else{
    int count = 0;
    int rockcount;
    int three[n];
    int threeidx = 0;
    for(i=0;i<n;i++){
      //printf("ループ:%d\n",i);
      //printf("カウント:%d\n",count);
      if(road[i]=='.'){
        rockcount = 0;
        count++;
      }else if(i==b-1){
        if(count == 1){
          count++;
        }
      }else{
        rockcount++;
        count = 0;
      }
      if(rockcount == 2){
        printf("禁止！！:%d",i);
        if(i-1<=c||i-1<=d){
          printf("No");
          return 0;
        }
      }
      if(count == 3&&i-1<d-1){
        three[threeidx] = i;
        threeidx++;
        //printf("ここは三点連続idx:%d\n",i);
        count = 0;
        rockcount = 0;
        i = i - 2;
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