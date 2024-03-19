#include <stdio.h>
int main(void){
  int N,ans;
  scanf("%d",&N);

  if(N%9==0){
    printf("Yes\n"); 
  }else if(N%8==0){
    if(N<=72){
    printf("Yes\n");
    }else{printf("No\n");}
  }else if(N%7==0){
    if(N<=63){
    printf("Yes\n");
    }else{printf("No\n");}
    }else if(N%6==0){
    if(N<54){
    printf("Yes\n");
    }else{printf("No\n");}
     }else if(N%5==0){
    if(N<45){
    printf("Yes\n");
    }else{printf("No\n");}
     }else if(N%4==0){
    if(N<36){
    printf("Yes\n");
    }else{printf("No\n");}
     }else if(N%3==0){
    if(N<27){
    printf("Yes\n");
    }else{printf("No\n");}
     }else if(N%2==0){
    if(N<18){
    printf("Yes\n");
    }else{printf("No\n");}
     }else if(N%1==0){
    if(N<9){
    printf("Yes\n");
    }else{printf("No\n");}
    
    }else{
    
    printf("No\n");
  }
  return 0;
}
