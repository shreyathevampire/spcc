#include<stdio.h>
#include<string.h>

void main(){

	FILE *ftp;
	char name[20],label[20],op[20];
	ftp = fopen("macro.txt","r");
	fscanf(ftp,"%s %s %s",name,label,op);
	if(strcmp(label,"MACRO")==0)
	{
		printf("%s  \n",name);
	}
	fclose(ftp);
	

	ftp = fopen("macro.txt","r");
	fscanf(ftp,"%s %s %s",name,label,op);
	//printf("%s  \n",label);
	while(strcmp(label,"MEND")!=0)
	{
		if(strcmp(label,"MACRO")==0)
		{
		fscanf(ftp,"%s %s %s",name,label,op);
		printf("%s %s %s \n",name,label,op);
		}
		else {
		fscanf(ftp,"%s %s %s",name,label,op);
		printf("%s %s %s \n",name,label,op);
		}
		

	}
	fclose(ftp);
	

}



macro.txt:

EXI MACRO &A
--  LDA &A
-- STA &B
-- MEND --
SAMPLE START 100
- EX N1,N2
N1 RESW 1
N2 RESW 1
-- END --

output:

EXI  
-- LDA &A 
-- STA &B 
-- MEND -- 
