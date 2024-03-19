int min2(int a, int b){return a>b?b:a;}
int a, b;
char c;
int main(){
  while((c=getchar())!=10){
    if(c=='0') a++;
    else b++;
  }
  printf("%d\n", min2(a,b)<<1);
}
