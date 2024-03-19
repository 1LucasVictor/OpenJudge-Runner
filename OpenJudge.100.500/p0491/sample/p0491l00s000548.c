int main(){
  long int a,b,c;
  scanf("%ld%ld",&a,&b);
  if(a>b){
    a%=b;
    c=b-a;
    if(a<c) printf("%ld",a);
    else printf("%ld",c);
  }else{
    b%=a;
    c=a-b;
    if(b<c) printf("%ld",b);
    else printf("%ld",c);
  }
  return 0;
}