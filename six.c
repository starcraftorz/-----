#include <stdio.h>
int main()
{
	int a[2][2]={1,2,3,4};
	int b[2][2]={1,1,1,1};
	int c[2][2];
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		c[i][j]=a[i][j]+b[i][j];
		printf("c[%d][%d]=%d\n",i,j,c[i][j]);	
		}
	}
	
}
