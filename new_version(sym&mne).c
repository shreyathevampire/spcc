#include<stdio.h>
#include<string.h>

char mnemonic[20][20] ={"L","A","ST"};

int check(char mne[20])
{
	int i;
	for(i=0;i<3;i++)
	{	
		if(strcmp(mne,mnemonic[i])==0)
		{//	printf("check\n");
			return 1;}
	}
		return 0;
	
}
int check_label(char label[20]){
	
	if(strcmp(label,"**")==0)
		return 1;

	return 0;
}
int check_fordsdc(char mne[20]){
	char dcds[3][3]={"DC","DS"};
	int i;
	for(i=0;i<2;i++)
		if(strcmp(mne,dcds[i])==0)	
		{
			printf("found = %s",mne);
			return 1;
	}	return 0;

}
void main(){

	FILE *ftp,*ftp1,*ftp2;
	char label[20],mne[20],op1[20],op2[20];
	int loc=0,aloc=0;
	ftp = fopen("assemble.txt","r");
	ftp1 = fopen("sym.txt","w");
	ftp2 = fopen("mne.txt","w");
	fscanf(ftp,"%s %s %s %s",label,mne,op1,op2);
	while(1){
	printf("%s \t",label);
	if(check(mne)==1)
	{
		loc = loc +4;
		fprintf(ftp2,"%s %d\n",mne,aloc);
		
	}
	else if(check_label(label)==0)
	{
		//printf("sym\n");
		fprintf(ftp1,"%s %d",label,loc);
	}
	 if(check_fordsdc(mne)==1)
	{
		printf("found %s  \n",mne);		
		loc = loc + 4;

	}
	
	fscanf(ftp,"%s %s %s %s",label,mne,op1,op2);
	aloc=loc;
	if(strcmp(mne,"END")==0)
		break;
	}
}



input file:
**	START 0 --
**	USING *	15
**	L 1	FOUR
**	A 1	FIVE
**	ST 1	TEMP
FOUR	DC F	4
FIVE	DC F	5
TEMP	DS F	2	
**	END **	**

sym file:
 FOUR 12FIVE 16TEMP 20
 
 mnemonic file
 L 0
A 4
ST 8
