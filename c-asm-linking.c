main.c 

#include<stdio.h>
extern int add(int , int);

void main()
{

	int a=10,b=10,c;
	c = add(a,b);
	printf("sum is =%d\n",c);

}

add.s

.global add
.type add,@function
add:
	addl %edi,%esi;
	movl %esi,%eax;
	ret;
  
  Compile cmd: gcc main.c add.s -o  g
  eceute : ./g
  
  output: sum is =20


