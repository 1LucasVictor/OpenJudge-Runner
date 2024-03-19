#include <stdio.h>
int main() {
	int N;
	int s[1000000];
	scanf("%d", &N);
  	for(int i=0; i<N; i++){
      int c = 0;
      scanf("%d",&c);
      //printf("%d", c);
      s[i] = c;
    }
  
  for (int i=0; i<N; i++){
  	int counter = 0;
    //printf("i :: %d\n", i);
    for(int j=0; j<N; j++){
    	//printf("i+1 ・%d <  > s[j]・%d\n", i+1, s[j]);
    	if(i+1 == s[j])
          counter++;
    }
    printf("%d\n", counter);
  }
}