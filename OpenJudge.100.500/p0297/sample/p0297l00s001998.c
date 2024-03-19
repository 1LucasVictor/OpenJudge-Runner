#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define L 100000
  
int main(void) {
  
  int n, q, Time = 0;
  
  int head=0;
  int tail=1;
  
  char name[L][11];
  int time[L];
  
  
  scanf("%d%d", &n, &q);
  
   for( tail=0; tail<n; tail++) {
    scanf("%s%d", name[tail], &time[tail]);
  }
  
  while(head != tail) {
  	if(time[head] <=q) {
  		Time+=time[head];
  		printf("%s %d\n",name[head],Time);
  	} else {
  		Time +=q;
  		strcpy(name[tail],name[head]);
  		time[tail] = time[head] - q;
  		
  		if(tail + 1 >= L) {
  			tail = 0;
  		}else {
  			tail++;
  		}
  	}
  		if(head + 1 >= L) {
  			head = 0;
  		} else {
  			head++;
  	}
  }
  	return 0;
}

  
  	
  	
