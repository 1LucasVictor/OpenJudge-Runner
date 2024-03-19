int main(){
  int length[6],i,j;
  for(i=0;i<6;i++){
     scanf("%d",&length[i]);
  }
  for(i=0;i<5;i++){
    for(j=0;j<5;j++){
      if(length[i]-length[j] > length[5]){
        printf(":(");
        return 0;
      }
    }
  }
  printf("Yay!");
  return 0;

}