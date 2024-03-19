int main(void)
{
  int array[6];
  int equal=0;
  int judge=0;
  for(int i=0;i<6;i++)
  {
    scanf("%d",&array[i]);
  }
  for(int i=0;i<6;i++)
  {
    for(int j=i+1;i+j<6;j++)
  {
     equal=(array[i]>array[j])?array[i]-array[j]:array[j]-array[i];
     if(equal>15)
     {
       judge+=1;
     }
  }
  }
    if(judge==0)
      printf("Yay!");
  	else
    printf(":(");

    return 0;
}