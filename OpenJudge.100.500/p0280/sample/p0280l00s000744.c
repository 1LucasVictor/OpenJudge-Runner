#include<stdio.h>
#define ENP 1000
#define END 2000
static const int MAX = 500;

int main(){
  int y=0, i, n, p, c, M[MAX][MAX], grab[MAX][3],  belongA[MAX], minimum = MAX, sum = 0 ,minimumC,minimumP;
  
  scanf("%d", &n);
  
  for ( p = 0; p< n; p++ ){
    belongA[p] = 0;
    for ( c = 0; c < n; c++ ){
      scanf("%d", &M[p][c]);
    }
  }
  for ( y = 0; y < MAX; y++ ){
    grab[y][0] = ENP;
    grab[y][1] = ENP;
    grab[y][2] = ENP;
  }
  
  p = 0;
  for(i = 0; i < n-1; i++ ){
    belongA[p] = 1;
    for ( c = 0; c< n; c++ ){
      if(M[p][c] != -1 && belongA[c] != 1){
        grab[y][0] = M[p][c];
        grab[y][1] = c;
	grab[y][2] = p;
	y++;
      }
      for ( y = 0; grab[y][0] != ENP; y++ ){
        if(grab[y][0] < minimum){
          minimum = grab[y][0];
          minimumC = grab[y][1];
	  minimumP = grab[y][2];
        }
      } 
    }
    for ( y = 0; grab[y][0] != ENP; y++ ){
      if(minimum == grab[y][0] && minimumC == grab[y][1]){
	grab[y][0] = END;
      }
    }
    sum += M[minimumP][minimumC];
    p = minimumC;
    minimum = MAX;
  }
  
  printf("%d\n", sum);
  
  
  return 0;
}