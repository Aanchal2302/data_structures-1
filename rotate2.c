#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	int arr[120];
	for(int i=0;i<n;i++)
	{
          scanf("%d",&arr[i]);
	}
	int i,j;
	int k;
	scanf("%d",&k);
	for(i=0;i<k;i++){
	int temp=arr[n-1];
	 for(j=n-1;j>0;j--)
	{
		arr[j]=arr[j-1];
	}
		arr[0]=temp;
	}
	for(int i=0;i<n;i++)
	printf("%d",arr[i]);
return 0;
}
