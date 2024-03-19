int main(void)
{
 	char a, b, c;
  	int d, e, f;
  	scanf("%c%c%c%*c", &a, &b, &c);
  	d = a - '0';
  	e = b - '0';
  	f = c - '0';
  	printf("%d", d+e+f);
}