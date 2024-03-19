#include<stdio.h>

int main(void){

int name[5];
  int k;
  int i;
  
  for(i=0;i<5;i++){
  	scanf("%d", &name[i]);
  }
  scanf("%d", &k);
int ans[12];
  
  ans[0] = name[1] - name[0];
  ans[1] = name[2] - name[0];
  ans[2] = name[3] - name[0];
  ans[3] = name[4] - name[0];
  ans[4] = name[2] - name[1];
  ans[5] = name[3] - name[1];
  ans[6] = name[4] - name[1];
  ans[7] = name[3] - name[2];
  ans[8] = name[4] - name[2];
  ans[9] = name[4] - name[3];
  int t =0;
for(t-0;t<10;t++){
  if(ans[t] > k){
	printf(":(");
    return 0;
  }
}
printf("Yay!");
return 0;

}