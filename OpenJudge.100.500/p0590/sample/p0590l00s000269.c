#include<stdio.h>

int main(void){
  int a[6];
  int i, j;

  for(i=0; i<6; i++){
    scanf("%d", &a[i]);
  }

for(i=0; i<5; i++){
  for(j=0; j<5; j++){
    if((a[i]-a[j])>a[5]){
        printf(":(\n");
        return 0;
    }
  }
}

printf("Yay!\n");
  return 0;
}
