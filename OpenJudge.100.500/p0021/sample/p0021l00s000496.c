#include <stdio.h>

int main(void){
  int i,n;
  int in[5000];
  int max,total,right,left,start,width;

  while(1){
    scanf("%d",&n);
    if(!n) break;

    for(i=total=0;i<n;i++){
      scanf("%d",&in[i]);
      total += in[i];
    }

    max = total;
    width = n;
    start = 0;

    while(--width > 0){
      right = total - in[start];
      left = total - in[start+width];

      if(left == right){
	if(left-in[start+width-1] >= right-in[start+1]){
	  right--;
	}else{
	  left--;
	}
      }

      if(left > right){
	if(max < left) max = left;
	total = left;
      }
      else{
	if(max < right) max = right;
	start++;
	total = right;
      }
    }

    printf("%d\n",max);
  }

  return 0;
}