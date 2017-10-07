#include<stdio.h>

int main()
{
	float ara[20],avr,sum=0;
	int i,count=0;
	for(i=0;i<6;i++){
		scanf("%f",&ara[i]);
	}
	for(i=0;i<6;i++){
		if(ara[i]>=0){
			sum+=ara[i];
			count++;
		}
	}
	avr=sum/count;
	printf("%d valores positivos\n",count);
	printf("%0.1f\n",avr);
	
}
