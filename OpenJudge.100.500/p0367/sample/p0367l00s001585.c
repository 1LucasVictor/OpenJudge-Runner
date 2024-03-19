int main(void){
 int a = 0;
 int b = 0;
 int c = 0;
 int d = 0;
 int i = 0;
 int j = 0;
    
 scanf("%d %d %d",&a,&b,&c);
  for(i = a;i<=b;i++){
   d = c%i;
   if(d==0){
    j++;
   }
  }
 printf("%d\n",j);
 return 0;
}