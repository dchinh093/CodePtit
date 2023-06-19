#include<stdio.h>
#include<string.h>

int main ()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n = 0, chan = 0, le = 0;
		char kt = ' ';
		while(kt != '\n')
		{
			int c;
			scanf("%d", &c);
			if(c % 2 == 0)
				++chan;
			else
				++le;
			++n;
			kt = getchar();
		}
		if((n % 2 == 0 && chan > le ) || (n % 2 == 1 && chan < le))
			printf("YES\n");
		else
			printf("NO\n");
	} 
	return 0;
	
	
} 
