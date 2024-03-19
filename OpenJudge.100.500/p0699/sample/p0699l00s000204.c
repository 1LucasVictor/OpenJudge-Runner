int main(){
  
  int a, b, c;
  int cnt_5 = 0, cnt_7 = 0;
  
  scanf("%d%d%d", &a, &b, &c);

  if(a == 5){
    cnt_5++;
  }if(a == 7){
    cnt_7++;
  }if(b == 5){
    cnt_5++;
  }if(b == 7){
    cnt_7++;
  }if(c == 5){
    cnt_5++;
  }if(c == 7){
    cnt_7++;
  }

  if(cnt_5 == 2 && cnt_7 == 1){
    printf("YES\n");
  }else{
    printf("NO\n");
  }
  
}
