int main()
{
 int n, a;
 int min, max;
 int read;
 long sum;

 min = 1000000;
 max = -1000000;
 sum = 0;

 scanf("%d", &a);

 for(n = 0; n < a; n++){
  scanf("%d", &read);
  if(read < min){
   min = read;
  }
  if(max < read){
   max = read;
  }
  sum = sum + read;
 }

 printf("%d %d %ld\n",min, max, sum);

 return 0;
}