#include<stdio.h>

int main()
{
    int X,N;
	int i,c1=0,c2=0;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&X);
		if(X>=10 && X<=20){
		c1++;
	}
	else c2++;
	}

	printf("%d in\n%d out\n",c1,c2);
	
}
