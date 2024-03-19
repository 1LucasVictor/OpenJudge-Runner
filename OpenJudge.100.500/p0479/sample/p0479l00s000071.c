#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include <assert.h>

int main(void){
		int a;
		scanf("%d",&a);
    int c[a];
    int b[a];



    for(int i = 0;i<a-1;i++){
      scanf("%d",&c[i]);
    }
    for(int i = 0;i<a-1;i++){
      b[i] = 0;
    }
    for(int i = 0;i<a;i++){
      for(int j = 0;j<a;j++){
        if(c[i] == j+1){
          b[j]++;
        }
      }
    }

    b[a-1] = 0;


    for(int i = 0;i<a;i++){
    printf("%d\n",b[i]);
  }

		return 0;
}
