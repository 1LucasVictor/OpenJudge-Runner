#include<stdio.h>

int main(){

  int n,flag;
  int i,j,minj;
  int x;
  char c;

  scanf("%d",&n);

  char C[n],C_s[n],D;
  int C2[n],C2_s[n];

  for(i=0;i<n;i++){
    scanf("%c%c%d",&D,&C[i],&C2[i]);
  }


  for(i=0;i<n;i++){
    C_s[i] = C[i];
    C2_s[i] = C2[i];
  }
  
  for(i=0;i<n-1;i++){
    flag=1;
    while(flag){
      flag=0;
      for(j=n-1;j>=i;j--){
	if(C2[j]<C2[j-1]){
	  x = C2[j];
	  C2[j] = C2[j-1];
	  C2[j-1] = x;

	  c = C[j];
	  C[j] = C[j-1];
	  C[j-1] = c;
	}
      }
    }
  }

  for(i=0;i<n-1;i++){
    minj = i;
    for(j=i;j<n;j++){
      if(C2_s[j]<C2_s[minj]){
	minj = j;
      }
    }
    if(i!=minj){
      x = C2_s[i];
      C2_s[i] = C2_s[minj];
      C2_s[minj] = x;

      c = C_s[i];
      C_s[i] = C_s[minj];
      C_s[minj] = c;
    }
  }

  for(i=0;i<n;i++){
    printf("%c%d",C[i],C2[i]);
    if(i<n-1) printf(" ");
  }
  printf("\nStable\n");
  
  for(i=0;i<n;i++){
    printf("%c%d",C_s[i],C2_s[i]);
    if(i<n-1) printf(" ");
  }

  flag = 0;
  for(i=0;i<n;i++){
    if(C2[i]!=C2_s[i] || C[i]!=C_s[i]){
      flag = 1;
      break;
    }
  }
  if(flag==0) printf("\nStable\n");
  else printf("\nNot stable\n");
  
  return 0;
}

