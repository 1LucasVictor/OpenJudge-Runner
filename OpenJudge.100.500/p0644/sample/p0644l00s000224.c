int main(){
  int s[3],set=0;
  scanf("%d", s);
  for(int i=0;i<3;i++){
    if(s[i] != 0) set++;
  }
  printf("%d",set);
}