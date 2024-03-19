#include <stdio.h>
#include <string.h>
int main()
{

  int time=0,i,head=0,tail,n,kuontamu,x[100000];
  char name[100000][10];

  scanf("%d %d",&n,&kuontamu);
  tail = n;
  for(i = 0; i < n; i++) {
    scanf("%s %d",name[i],&x[i]);
  }


  while(tail != head) {
    if(x[head] > kuontamu) {
      time += kuontamu;
      x[head] -= kuontamu;

      strcpy(name[tail],name[head]);
      x[tail] = x[head];
      tail++;
      if(tail == 100000) {
        tail = 0;
      }
    }
    else{
      time += x[head];
      printf("%s %d\n",name[head],time);
    }
    head++;
    if(head == 100000) {
      head = 0;
    }
  }
  return 0;
}