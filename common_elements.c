#include<stdio.h>
int main()
{
	int arr1[50],arr2[50],m,n,i,j,flag=0;
	printf("Enter m:");
	scanf("%d",&m);
	printf("Enter n:");
	scanf("%d",&n);
	for(i=0;i<=m-1;i++){
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&arr2[i]);
	}
	for(i=0;i<=m-1;i++)
	 {
	 	for(j=0;j<=n-1;j++)
	 	{
	 		if(arr1[i]==arr2[j])
	 		{
	 			flag++;
	 			printf("%d ",arr1[i]);
			}
		 }
	 }
	 if(flag==0)
	 {
	 	printf("No common elements found\n");
	 }
	 return 0;
}
