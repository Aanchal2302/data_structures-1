#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char* argv[])
{
	int arr[90];
	for(int i=0;i<argc;i++)
	{
	  arr[i]=atoi(argv[i]);
	}
	for(int i=argc-1;i>=0;i--)
	{
	   printf("%d",arr[i]);
	}
return 0;
}
