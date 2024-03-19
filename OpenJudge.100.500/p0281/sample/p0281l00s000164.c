/* 
 * File:   main.c
 * Author: s1252005
 *
 * Created on July 30, 2018, 8:00 PM
 */

#include <stdio.h>
#define INF (1<<28);//flag

int main() {
  int M[101][101];
  int size;
  int id, next, pathweight, k;
  
  for(int i = 0; i < 101; ++i)
  {
    for(int j = 0; j < 101; ++j)
    {
        if( i== j )
           M[i][j] = 0;
        else
           M[i][j] = INF;
    }
  }
  scanf("%d", &size);
  for(int i = 0; i < size; ++i)
  {
    scanf("%d %d", &id, &k);
    
    while( k--) 
    {
      scanf("%d %d", &next, &pathweight);
      M[id][next] = pathweight;
    }
  }
  
  int temp;
  for(k = 0; k < size; ++k)
  {
    for(int i = 0; i < size; ++i) 
    {
      for(int j = 0; j < size; ++j) 
      {
        temp = M[i][k] + M[k][j];
        if(temp < M[i][j]) 
            M[i][j] = temp;
      }
    }
  }

  for(int i = 0; i < size; ++i) {
    printf("%d %d\n", i, M[0][i]);
  }

  return 0;
}

