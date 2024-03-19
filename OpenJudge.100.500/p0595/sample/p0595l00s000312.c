int main(){
  
  int a, b, k;
  int ans[100];
  int n = 1;
  int max = 0;
  
  scanf("%d%d%d", &a, &b, &k);

  if(a >= b){
    max = a;
  }else{
    max = b;
  }

  for(int cnt = max; cnt > 0; cnt--){
    if((a % cnt == 0) && (b % cnt == 0)){
      ans[n++] = cnt;
    }
  }
  
  printf("%d\n",  ans[k]);
  
}
