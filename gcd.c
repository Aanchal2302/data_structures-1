#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char* argv[])
{
	int a=atoi(argv[1]);
	int b=atoi(argv[2]);
         int gcd;
	for(int i=1;i<=a && i<=b;i++)
	{
	  if(a%i==0 && b%i==0)
		{
	          gcd=i;
		}
	}
	printf("%d",gcd);
return 0;
}
