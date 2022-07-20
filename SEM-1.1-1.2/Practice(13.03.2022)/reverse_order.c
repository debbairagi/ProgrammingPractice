#include<stdio.h>
int main()
{
	int i,j,temp;
	int arr[ ]={10,20,30,40,50,60,70,80,90,100};

	for(i=0, j=9; i<5; i++,j--)
	{
		temp= arr[j];
		arr[j]=arr[i];
		arr[i]=temp;
	}

	for(i=0; i<10; i++)
	{
		printf("%d number's reverse is: %d\n",i+1, arr[i]);
	}
	return 0;
}
