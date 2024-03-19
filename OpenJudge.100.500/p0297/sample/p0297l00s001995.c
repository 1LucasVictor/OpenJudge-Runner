#include <stdio.h>
#include <string.h>

#define MAX 1000000

int head = 0,tail=0;
char name[MAX][11];
int ptime[MAX];

int main(){
  int n ,q,i,j,count = 0;
  scanf("%d%d",&n,&q);

  for(tail=0;tail<n;tail++) scanf("%s%d",name[tail],&ptime[tail]);
  

  while(head!=tail){
    if(q < ptime[head]){
      ptime[tail] = ptime[head]-q;
      strcpy(name[tail],name[head]);
      count += q;
      tail = (tail + 1)%MAX;
      head = (head + 1)%MAX;
    }
    
    else{
      count += ptime[head];
      
      printf("%s %d\n",name[head],count);
      
      head = (head + 1)%MAX;
      
    }
  }

  return 0;
}



