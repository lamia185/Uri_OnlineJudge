#include<stdio.h>

int main()
{
	int ara[10],ara2[10];
	int i,j,temp;
	for(i=0;i<3;i++){
		scanf("%d",&ara[i]);
	}
	for(i=0;i<3;i++){
		ara2[i]=ara[i];
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			if(ara[j]>ara[j+1]){
				temp=ara[j];
				ara[j]=ara[j+1];
				ara[j+1]=temp;
			}
		}
	}
	for(j=0;j<3;j++){
		printf("%d\n",ara[j]);
	}
	printf("\n");
	for(i=0;i<3;i++){
		printf("%d\n",ara2[i]);
	}
}
