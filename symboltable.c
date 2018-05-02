#include<stdio.h>
#include<string.h>

void main(){

	char label[20],opcode[20],op1[30],op2[20];
	char mnemonic[20][20] ={"L","A","ST","DC","DS","END"};
	FILE *ftp;
	int loc=0,i;
	ftp = fopen("input.dat","r");
	
		fscanf(ftp,"%s %s %s %s",label,opcode,op1,op2);
		printf("%s\n",opcode);
		while(strcmp(opcode,"END")!=0)
		{
			fscanf(ftp,"%s %s %s %s",label,opcode,op1,op2);
		//printf("%s\n",opcode);
			if(strcmp(label,"**")!=0)
				printf("%s\n",label);
			for(i=0;i<6;i++)
			{
				if(strcmp(opcode,mnemonic[i]))
				{
					loc =loc +4;
					break;
				}
			}
		if(strcmp(label,"**")!=0)
				printf("%s %d\n",label,loc);
			
		}

}


input file:

PGI 	START * 15
**		L 		1 FOUR
**		A 		2 FIVE
**	ST 		1 TEMP
FOUR 	DC F 4
FIVE 	DC F 5
TEMP 	DS 1 F
**	END


output:
START
FOUR
FOUR 16
FIVE
FIVE 20
TEMP
TEMP 24

