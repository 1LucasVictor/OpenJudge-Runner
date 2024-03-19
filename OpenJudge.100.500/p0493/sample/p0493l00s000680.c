int main(void) {
  int X;
  int happy;

  scanf("%d", &X);
  
  happy = (X/500)*1000 + ((X%500)/5)*5;
  printf("%d", happy);
  
  return 0;
}