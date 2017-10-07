#include<stdio.h>

int main()
{
	int x,y,a,b,i,sum=0;
	scanf("%d %d",&x,&y);
	if(x<y){
		a=x;
		b=y;
	}
	else {
		a=y;
		b=x;
	}
	for(i=a+1;i<b;i++){
		if(i%2!=0){
			sum+=i;
		}
	}
	printf("%d\n",sum);
}
