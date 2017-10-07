#include<stdio.h>

int main()
{
	int X,Y;
	float total;
	scanf("%d %d",&X,&Y);
	if(X==1)
    {
     	total=4.00*Y;
     	printf("Total: R$ %0.2f\n",total);
	}
	if(X==2)
    {
     	total=4.50*Y;
     	printf("Total: R$ %0.2f\n",total);
	}
	if(X==3)
    {
     	total=5.00*Y;
     	printf("Total: R$ %0.2f\n",total);
	}
	if(X==4)
    {
     	total=2.00*Y;
     	printf("Total: R$ %0.2f\n",total);
	}
	if(X==5)
    { 
     	total=1.50*Y;
     	printf("Total: R$ %0.2f\n",total);
	}
}

