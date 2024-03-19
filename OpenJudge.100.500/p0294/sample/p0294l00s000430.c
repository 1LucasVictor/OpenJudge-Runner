#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
  int value;
  char design[2];
}Card;

void Bubble_sort();
void Selection_sort();

int N;
Card c1[36], c2[36];

int main(){
  int i, j;
  
  scanf("%d",&N);
  if( N<1 || 36<N )exit(0);
  
  for( i=0 ; i<N ; i++ ){    
    scanf("%s",c1[i].design);
  
    c1[i].value = atoi(&c1[i].design[1]);
    c2[i] = c1[i];
  }

  Bubble_sort();
  Selection_sort();
  
  return 0;
}

void Bubble_sort(){
  int i, j, num;
  Card tmp;

  for( i=0 ; i<N ; i++ ){
    for( j=N-1 ; i<j ; j-- ){
      if(c1[j].value < c1[j-1].value)
    {
    tmp = c1[j];
    c1[j] = c1[j-1];
    c1[j-1] = tmp;
    }
    }
  }

  for( i=0 ; i<N ; i++ ){
    if( i==N-1 ) printf("%c%d", c1[i].design[0], c1[i].value);
    else printf("%c%d ", c1[i].design[0], c1[i].value);
  }
  printf("\n");
  printf("Stable\n");
}

void Selection_sort(){
  int i, j, minj, difference;
  Card tmp;
  
  for( i=0 ; i<N-1 ; i++ ){
    minj = i;
    
    for( j=i ; j<N ; j++ ){
      if( c2[j].value < c2[minj].value ){
    minj = j;
      }
    }
    tmp = c2[i];
    c2[i] = c2[minj];
    c2[minj] = tmp;
  }

  for( i=0 ; i<N ; i++){
    if( strcmp(c1[i].design, c2[i].design) != 0){
      difference = 1;
    }

    if( i==N-1 ) printf("%c%d",c2[i].design[0], c2[i].value);
    else printf("%c%d ",c2[i].design[0], c2[i].value);
  }
  printf("\n");

  if( difference == 1 ) printf("Not stable\n");
  else printf("Stable\n");
  
}