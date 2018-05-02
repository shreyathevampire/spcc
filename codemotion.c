#include<stdio.h>
#include<time.h>

void main(){

	int i,lim,t=1,a,total;
	clock_t start,stop;
	printf("unoptimised code\n");
	lim=2000;
	start = clock();
	while(t<=lim-2)
	{
		t = t*2;
		printf("%d\t",t);
	}
	stop = clock();
	total = (stop - start)/2;
	printf("time taken =%d\n",total);
	
	printf("optimised code\n");
	lim=2000;
	t=1;
	start = clock();
	a = lim-2;
	while(t<=a)
	{
		t = t*2;
		printf("%d\t",t);
	}
	stop = clock();
	total = (stop - start)/2;
	printf("time taken =%d\n",total);
	

}



output:
unoptimised code
2	4	8	16	32	64	128	256	512	1024	2048	time taken =15
optimised code
2	4	8	16	32	64	128	256	512	1024	2048	time taken =3
