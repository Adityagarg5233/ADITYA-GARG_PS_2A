#include<stdio.h>
int main()
{
    	float x,sum=1,temp=1;
	int i,n;
	printf("Input the value of x :");
	scanf("%f",&x);
	printf("Input number of terms : ");
	scanf("%d",&n);

	for (i=1;i<n;i++)
	{

	   temp=temp*x/(float)i;
	   if(i%2==0)
	   { sum =sum+temp; }
	   else
	   { sum =sum-temp; }
	}
	printf("\nThe sum  is : %f\n",sum);

    return 0;
}
