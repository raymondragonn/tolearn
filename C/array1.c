#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a[2][3][5]={2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60};
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<3; j++)
		{
			for(int k=0; k<5; k++)
			{
				printf("Arreglo [%i][%i][%i]: %i\n",i+1,j+1,k+1,a[i][j][k]);
			}
		}
	}

	return 0;
}