#include<stdio.h>
int main(void)
{
	int n,arr[500];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	   scanf("%d",&arr[i]);
	}
	int k;
	scanf("%d",&k);
	int first=arr[0];
	int last=arr[n-1];
	int mid=(first+last)/2;
	while(first<last)
	  {
	       if(k<arr[mid])
	      {
		first=mid-1;
          	}
	        if(k>arr[mid])
		{
		     first=mid+1;
		}
		if(k==arr[mid])
		{
		    printf("%d",mid+1);
		}
	  }
return 0;
}		
		
