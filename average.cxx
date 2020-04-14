#include<stdio.h>
int main()
{
	int n,i ;
	float sum = 0, x;
	printf("enter number of elements :");
	scanf("%d",&n);
	printf("enter %d elements ",n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&x);
		sum += x;
	}
	printf("average of entered number is = %f",(sum/n));
  return 0 ;
}