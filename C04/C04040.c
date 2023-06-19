#include<stdio.h>
#define ll long long

ll max(ll a, ll b)
{
	if(a > b)
		return a;
	else 
		return b;
} 

int main()
{ 
	int t; 
	scanf("%d",&t); 
	while(t--)
	{ 
		int n;
		scanf("%d",&n); 	
		ll a[100005];
		for(int i=1 ; i <= n ; i++)
			scanf("%lld", &a[i]); 
			
		ll sum1 = 0 , sum2 = 0; 
		for(int i = 1 ;  i <= n ; i++)
		{ 
			sum1 += a[i]; 
			sum2 = max( sum1, sum2 ); 
			if(sum1 < 0) 
				sum1 = 0; 
		} 
		printf("%lld\n",sum2); 
	} 
}
