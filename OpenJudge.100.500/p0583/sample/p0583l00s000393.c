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
    for(i=a;i<d;i++){
      if(road[i-1]=='#'&&road[i]=='#'){
        printf("No");
        return 0;
      }
    }
    printf("Yes");
    return 0;
  }else{
    for(i=b-1;i<d;i++){
      //printf("%d", i);
      if(road[i-1]=='.'&&road[i]=='.'&&road[i+1]=='.'){
        printf("Yes");
        return 0;
      }
    }
    printf("No");
    return 0;
  }
  return 0;
}