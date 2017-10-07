#include<stdio.h>

int main()
{
	int A,B,C,D;
	scanf("%d %d %d %d",&A,&B,&C,&D);
	int x=C+D;
	int y=A+B;
	if(A%2==0 && C>=0 && D>=0 && B>C && D>A && x>y)
	printf("Valores aceitos\n");
	else printf("Valores nao aceitos\n");
}
