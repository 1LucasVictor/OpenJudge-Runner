int main(){
  int a,b,t,i;
  scanf("%d%d%d",&a,&b,&t);
  for(i=0;(float)t+0.5 > a;i++)
    t=t-a;
  printf("%d",i*b);
}