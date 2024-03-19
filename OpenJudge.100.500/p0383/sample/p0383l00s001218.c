#include<stdio.h>
#include <stdlib.h>
int main(){
  
  int x,y,z,q,i,m,flg;
  int box1[100][100]={0};
  int box2[100][100]={0};
  int box3[100][100]={0};
  scanf("%d%d%d",&x,&y,&z);
  flg=0;
for(i=0;i<x;i++){
	for(q=0;q<y;q++){
		scanf("%d",&box1[i][q]);
	}
}  
for(i=0;i<y;i++){
	for(q=0;q<z;q++){
		scanf("%d",&box2[i][q]);
		for(m=0;m<x;m++){
			box3[m][q] += box2[i][q]*box1[m][i];
			if(box3[m][q]>10000){flg=1;}
		}
		
	}
}
if(flg != 0){printf("Too Large\n");return 0;}
for(i=0;i<x;i++){
	for(q=0;q<z;q++){
		if(q==0){printf("%d",box3[i][q]);}
		else{printf(" %d",box3[i][q]);}
	}printf("\n");
}

  return 0;
}