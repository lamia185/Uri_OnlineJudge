#include<stdio.h>

int main()
{
	long int X;
	int i;
	scanf("%lld",&X);
	for(i=1;i<=X;i++){
		if(!(i%2==0))
		printf("%d\n",i);
	}
}
