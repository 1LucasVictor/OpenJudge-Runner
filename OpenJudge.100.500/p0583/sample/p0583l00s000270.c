#include <stdio.h>

int main(){
  int n,a,b,c,d;
  scanf("%d%d%d%d%d\n", &n, &a, &b, &c, &d);
  int road[n];
  char ch;
  for(int i = 0; i < n; ++i){
    scanf("%c",&ch);
    if(ch == '#') road[i] = 1;
    else if(ch == '.') road[i] = 0;
  }
  int flag = 0;
  int flag_two = 0, flag_two_bin = 0;//a~dに##が無いことが必要
  int flag_three = 1, flag_three_bin = 0;//d<cならb-1 ~ d+1に...が必要
  for(int i = a-1; i < d-1; ++i){
    if(flag_two_bin == 1 && road[i] == 1){
      flag_two = 1;
      break;
    }else if(road[i] == 0) flag_two_bin = 0;
    else if(road[i] == 1) flag_two_bin = 1;
  }
  if(d < c){
    for(int i = b-2; i <= d; ++i){
      if(flag_three_bin == 2 && road[i] == 0){
        flag_three = 0;
        break;
      }else if(road[i] == 1) flag_three_bin = 0;
      else if(flag_three_bin == 0 && road[i] == 0) flag_three_bin = 1;
      else if(flag_three_bin == 1 && road[i] == 0) flag_three_bin = 2;
    }
  }
  if(flag_two == 1) flag = 1;
  if(flag == 0 && flag_three == 1 && d < c) flag = 1;
  if(flag == 0) printf("Yes\n");
  else if(flag == 1) printf("No\n");
  return 0;
}