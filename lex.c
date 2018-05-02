#include<stdlib.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>
char keywords[20][20]={"void","printf","scanf"};
//char operator[20][1]={"+","-","*","="};

int if_keyword(char label[20]){

	int i;
	for(i=0;i<3;i++)
		if(strcmp(label,keywords[i])==0)
		{
			//printf("keyword found\n");
			return 1;
		}
			return 0;

}

int if_operator(char label[20]){

	int i;
	for(i=0;i<3;i++)
		if(strcmp(label,"=")==0)
		{
			//printf("operator found\n");
			return 1;
		}
			return 0;

}

int if_numb(char label[20]){

	if(atoi(label))
		return 1;
	return 0;

}
void main()
{
	char label[30];
	FILE *ftp;
	int x;
	ftp = fopen("prog.txt","r");
	//fscanf(ftp,"%s",label);
	while(feof(ftp)==0)
	{
	fscanf(ftp,"%s",label);
	//printf("%s   ", label);
	if(if_keyword(label)==1)
		printf("%s is a keyword\n",label);
	else if(if_operator(label)==1)
		printf("%s is a operator\n",label);
	else if(if_numb(label)==1)
		printf("%s is a number\n",label);
	else if(strcmp(label,"(){")==0)
	{}
	else if(strcmp(label,"}")==0)
	{}
	else
		printf("%s is an identifier\n",label);
	}

}



input file:

void main (){
int a b
a = 10 
b = 10 

}

output:
void is a keyword
main is an identifier
int is an identifier
a is an identifier
b is an identifier
a is an identifier
= is a operator
10 is a number
b is an identifier
= is a operator
10 is a number

