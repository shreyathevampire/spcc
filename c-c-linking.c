main.c 

#include<stdio.h>
#include<stdlib.h>
extern void sort(int arr[] , int );
void main(){

	int arr[30],i;
	for(i=0;i<20;i++)
	{
		arr[i] = rand()%1000;
	}
	for(i=0;i<20;i++)
	{
		printf("%d \t",arr[i]);
	}
	printf("\n");
	sort(arr,20);
	for(i=0;i<20;i++)
	{
		printf("%d \t",arr[i]);
	}
}

sort.c 
void sort (int arr[] , int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
}


Compile cmd : gcc main.c sort.c -o c
execure: ./c

output:
383 	886 	777 	915 	793 	335 	386 	492 	649 	421 	362 	27 	690 	59 	763 	926 	540 	426 	172 	736 	
0 27 	59 	172 	335 	362 	383 	386 	421 	426 	492 	540 	649 	690 	736 	763 	777 	793 	886 	915 
