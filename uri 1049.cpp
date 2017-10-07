#include<stdio.h>
#include<string.h>

int main()
{
	char nam1[50],nam2[50],nam3[50];
	gets(nam1);
	gets(nam2);
	gets(nam3);
	if(strcmp(nam1,"vertebrado")==0 && (strcmp(nam2,"ave")==0) && (strcmp(nam3,"carnivoro")==0))
	printf("aguia\n");
	else if(strcmp(nam1,"vertebrado")==0 && (strcmp(nam2,"ave")==0) && (strcmp(nam3,"onivoro")==0))
	printf("pomba\n");
	else if(strcmp(nam1,"vertebrado")==0 && (strcmp(nam2,"mamifero")==0) && (strcmp(nam3,"onivoro")==0))
	printf("homem\n");
	else if(strcmp(nam1,"vertebrado")==0 && (strcmp(nam2,"mamifero")==0) && (strcmp(nam3,"herbivoro")==0))
	printf("vaca\n");
	else if(strcmp(nam1,"invertebrado")==0 && (strcmp(nam2,"inseto")==0) && (strcmp(nam3,"hematofago")==0))
	printf("pulga\n");
	else if(strcmp(nam1,"invertebrado")==0 && (strcmp(nam2,"inseto")==0) && (strcmp(nam3,"herbivoro")==0))
	printf("lagarta\n");
	else if(strcmp(nam1,"invertebrado")==0 && (strcmp(nam2,"anelideo")==0) && (strcmp(nam3,"hematofago")==0))
	printf("sanguessuga\n");
	else if(strcmp(nam1,"invertebrado")==0 && (strcmp(nam2,"anelideo")==0) && (strcmp(nam3,"onivoro")==0))
	printf("minhoca\n");
}

