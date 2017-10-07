#include<stdio.h>

int main()
{
	int X,i;
	scanf("%d",&X);
	int Y=X+1;
	for(i=1;i<=6;i++){
		if(X%2==0){
			printf("%d\n",Y);
			Y=Y+2;
		}
		else {
		printf("%d\n",X);
		X=X+2;
	}
	}
}
