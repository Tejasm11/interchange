#include<stdio.h>
int main()
{
	int i , j , k, large , small , m=0 , n=0 ,o ;
	int arr[100];
	printf("how many elements to be in array =");
	scanf("%d\t",&o);
	for (i=0 ; i<o ; i++)
	scanf("%d",&arr[i]);
	printf("array before interchanged =");
	for (i=0 ; i<o ; i++)
	printf("%d\t",arr[i]);
	printf("\n");
	k=0;
	large=small=arr[0];
	for(j=0; j<o ; j++)
	{
		if(arr[j]>large)
		{
			m=j;
			large=arr[j];
		}
		
			if(arr[j]<small)
			{
				n=j;
				small=arr[j];
			}
	}
	k=arr[m];
	arr[m]=arr[n];
	arr[n]=k;

printf("the smallest and the largest number is = %d and %d\n",small, large );
printf("the largest and the smallest numbers location is interchanged =");
for(i=0 ; i<o ; i++)
printf("%d\t",arr[i]);
return 0 ;
}
			
	