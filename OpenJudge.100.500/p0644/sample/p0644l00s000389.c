void count(){
  int mas[3];
  int count = 0;
  scanf("%1d%1d%1d", &mas[0], &mas[1], &mas[2]);

  for(int i=0; i<sizeof(mas)/sizeof(mas[0]); i++){
    if(mas[i] != 0){
      count++;
    }
  }
  printf("%d", count); 
}

int main(){
  count();
  return 0;
}