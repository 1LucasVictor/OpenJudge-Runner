#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int n,a,b,c,d,ans;
	scanf("%d %d %d %d %d",&n, &a, &b, &c, &d);
	char s[n];
	scanf("%s", &s);
	a--;
	b--;
	c--;
	d--;
	ans=0;
	
	s[a]='a';
	s[b]='b';
//	printf("%s\n", s);
	if(c>d){	//a go first
		while(1){
		if(s[c]=='a'){
			if(s[d]=='b'){
				ans=1;
				break;
			}else{
				if(s[b+1]=='.'){
					s[b]='.';
					b++;
					s[b]='b';
				}else{
					if(s[b+2]=='.'){
						s[b]='.';
						b+=2;
						s[b]='b';
					}else{
						ans=0;
						break;
					}
				}
			}
		}else{
			if(s[a+1]=='.'){
				s[a]='.';
				a++;
				s[a]='a';
			}else{
				if(s[a+2]=='.'){
					s[a]='.';
					a+=2;
					s[a]='a';
				}else{
					if(s[d]=='b'){
						ans=0;
						break;
					}else{
						if(s[b+1]=='.'){
							s[b]='.';
							b++;
							s[b]='b';
						}else{
							if(s[b+2]=='.'){
								s[b]='.';
								b+=2;
								s[b]='b';
							}else{
								ans=0;
								break;
							}
						}
					}
				}
			}
		}
//		printf("%s\n", s);
		}
	}else{
		while(1){
		if(s[d]=='b'){
			if(s[c]=='a'){
				ans=1;
				break;
			}else{
				if(s[a+1]=='.'){
					s[a]='.';
					a++;
					s[a]='a';
				}else{
					if(s[a+2]=='.'){
						s[a]='.';
						a+=2;
						s[a]='a';
					}else{
						ans=0;
						break;
					}
				}
			}
		}else{
			if(s[b+1]=='.'){
				s[b]='.';
				b++;
				s[b]='b';
			}else{
				if(s[b+2]=='.'){
					s[b]='.';
					b+=2;
					s[b]='b';
				}else{
					if(s[c]=='a'){
						ans=0;
						break;
					}else{
						if(s[a+1]=='.'){
							s[a]='.';
							a++;
							s[a]='a';
						}else{
							if(s[a+2]=='.'){
								s[a]='.';
								a+=2;
								s[a]='a';
							}else{
								ans=0;
								break;
							}
						}
					}
				}
			}
		}
//		printf("%s\n", s);
		}
	}
	if(ans==1)
		printf("Yes");
	else
		printf("No");
	return 0;
}