#include<stdio.h>
int main(){
 int N[4][13]={0};
 char O[52];
 int A[52];
 int n,i,j,k;

 scanf("%d",&n);

 for(i=0;i<n;i++){
   scanf("%c %d\n",&O[i],&A[i]);
 
  switch(O[i]){
   case 'S':
   N[0][A[i]]=A[i];
   break;

   case 'H':
   N[1][A[i]]=A[i];
   break;

   case 'C':
   N[2][A[i]]=A[i];
   break;

   case 'D':
   N[3][A[i]]=A[i];
   break;
  }
 }

  for(j=0;j<=3;j++){
  
   switch(j){
    case 0:
     for(k=1;k<=13;k++){
      if(N[j][k]==0){
      printf("%c %d\n",'S',k);
    }
   }
   break;

    case 1:
     for(k=1;k<=13;k++){
      if(N[j][k]==0){
      printf("%c %d\n",'H',k);
    }
   }
   break;

    case 2:
     for(k=1;k<=13;k++){
      if(N[j][k]==0){
      printf("%c %d\n",'C',k);
    }
   }
   break;

    case 3:
     for(k=1;k<=13;k++){
      if(N[j][k]==0){
      printf("%c %d\n",'D',k);
    }
   }
   break;

  }

}

return 0;
}