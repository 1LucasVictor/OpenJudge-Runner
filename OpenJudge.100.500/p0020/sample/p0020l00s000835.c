main(){
  float a,b,c,d,w,x,y,z,t,m,p;
  int i;
  scanf("%d",&i);
  while(i>0)
    {
      scanf("%f%f%f%f%f%f%f%f",&a,&w,&b,&x,&c,&y,&d,&z);
	if(((a-b)/(w-x))==((c-d)/(y-z)))
	  printf("YES\n");
	else
	  printf("NO\n");
      i--;
     }
  return 0;
}