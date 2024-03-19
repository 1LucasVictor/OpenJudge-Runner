int main(void){
  char S[4];
  scanf("%s",&S);
  for(int i=0;i<3;i++){
    if(S[i]==S[i+1]){
      printf("Bad");
    }else if(i=="2"){
      printf("Good");
    }
  }
  return 0;
}