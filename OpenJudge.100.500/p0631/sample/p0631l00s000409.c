#include<stdio.h>

int main(){
  int dog_or_cat;
  int cat;
  int result;
  int i;
  
  scanf("%d %d %d",&cat,&dog_or_cat,&result);
  
  for(i=0;i<=dog_or_cat;i++){
    if(cat + dog_or_cat < result){printf("NO\n");break;}
    if(cat > result){printf("NO\n");break;}
    
    if(cat + i == result){
      printf("YES\n");
      break;
    }
  }
  
  return 0;
  
}