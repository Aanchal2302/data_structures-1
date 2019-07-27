#include<stdio.h>
int main(void)
{
	int n,arr[120],k;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	   scanf("%d",&arr[i]);
	}
	scanf("%d",&k);
	int sh;
	for(int j=0;j<n;j++)
	{
	     if(arr[j]==k)
	      {
                sh=j;
		break;
	      }
	}
	printf("%d",sh+1);
return 0;
}
