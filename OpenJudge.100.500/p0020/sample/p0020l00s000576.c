main(){
  float a,b,c,d,w,x,y,z;
  int i;
  scanf("%d",&i);
  for(;i--;)
    {
      scanf("%f%f%f%f%f%f%f%f",&a,&w,&b,&x,&c,&y,&d,&z);
	if(((a-b)*(c-d))==((w-x)*(y-z)))
	  puts("YES");
	else
	  puts("NO");
    }
  return 0;
}