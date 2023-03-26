#include<stdio.h>
int main(){
	int arr[50],i,n,key,p,q,flag=0,j;
	printf("Enter the range:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the key:");
	scanf("%d",&key);
	for(i=0;i<=n-1;i++)
	{
	   for(j=i+1;j<=n-1;j++)
	   {
	   	 if((arr[i]+arr[j])==key)
	   	 {
	   	 	flag++;
	   	 	p=arr[i];
	   	 	q=arr[j];
	   	 	printf("%d %d\n",p,q);
		 }
	   }
	}
	
	if(flag==0)
	{
		printf("No such elements are found\n");
	}
}
