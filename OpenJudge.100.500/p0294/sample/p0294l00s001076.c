#include <stdio.h>
#include <stdlib.h>

struct{
  char mark;
  int value;
}typedef Card;


main(){
  Card C[36], C2[36], list[2];
  int i, j, k, min, n, c = 0, l, f = 0;
  char m;
  
  scanf("%d", &n);
  scanf(" %c %d ", &C[0].mark,&C[0].value);
  for(i = 1;i < n-1;i++) scanf("%c %d ", &C[i].mark,&C[i].value);
  scanf("%c %d", &C[i].mark,&C[i].value);

  for(i = 0;i < n;i++){
    C2[i]=C[i];
  }

  for(i = 0;i < n;i++){
    for(j = i;j < n-1;j++){
      if(C[i].value == C[j].value){
	l = C[i].value;
	list[c].mark = C[i].mark;
	list[c].value = c;
	c++;
	list[c].mark = C[j].mark;
	list[c].value = c;
	c++;
      }
      if(c == 2) break;
    }
    if(c == 2) break;
  }

  for(i = 0;i < n;i++){
    for(j = n-1;j > i;j--){
      if(C[j].value < C[j - 1].value){
	k = C[j].value;
	C[j].value = C[j-1].value;
	C[j-1].value = k;
	m = C[j].mark;
	C[j].mark = C[j-1].mark;
	C[j-1].mark = m;

      }
    }
  }
  
  for(i = 0;i < n;i++){
    min = i;
    for(j = i;j < n;j++){
      if(C2[j].value < C2[min].value){
	min = j;
      }
    }
    k = C2[i].value;
    C2[i].value = C2[min].value;
    C2[min].value = k;
    m = C2[i].mark;
    C2[i].mark = C2[min].mark;
    C2[min].mark = m;
  }
  
  for(i = 0;i < n - 1;i++){
    printf("%c%d ", C[i].mark, C[i].value);
  }
  printf("%c%d\n", C[i].mark, C[i].value);

  for(i = 0;i < n - 1;i++){
    if(l == C[i].value){
      if(C[i].mark == list[0].mark){
	f = 1;
      }
      break;
    }
  }   

  if(f == 1) printf("Stable\n");
  else printf("Not stable\n");

  for(i = 0;i < n - 1;i++){
    printf("%c%d ", C2[i].mark, C2[i].value);
  }
  printf("%c%d\n", C2[i].mark, C2[i].value);
  
  for(i = 0, f = 0;i < n - 1;i++){
    if(l == C2[i].value){
      if(C2[i].mark == list[0].mark){
	f = 1;
      }
      break;
    }
  } 
  
  if(f == 1) printf("Stable\n");
  else printf("Not stable\n");

  return 0;
}