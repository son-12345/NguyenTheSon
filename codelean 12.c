#include <stdio.h>
void amin(){
	int n;
	int num[100];
	int l;
	int desnum[100], k;
	int i, j, temp;
	printf("\nEnter the total number of marks to be entered : ");
	scanf("%d", &n);
	for (l = 0; l < n; l++)
	{
		printf("\n Enter the marks of student %d : ", l + 1);
		scanf("%d", &num[l]);
	}
	for (k = 0; k < n; k++)
	desnum[k] = num[k];
	for(i = 0; i < n - 1; i++)
	{
		for(j = i + 1; j < n; j++)
		{
			if(desnum[i] < desnum[j])
				{
		temp = desnum[i];
		desnum[i] = desnum[j];
		desnum[j] = temp;
			}
		}
	}
	for(i = 0; i < n; i++)
	printf("\n Nuumber at [%d] is %d", i, desnum[i]);
}
