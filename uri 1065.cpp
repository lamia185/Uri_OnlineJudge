#include<stdio.h>

int main()
{
	int ara[10],i,count=0;
	for(i=0;i<5;i++){
		scanf("%d",&ara[i]);
	}
	for(i=0;i<5;i++){
		if(ara[i]%2==0){
			count++;
		}
	}
	printf("%d valores pares\n",count);
}
