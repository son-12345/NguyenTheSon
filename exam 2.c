#include<stdio.h>

int main(){
	int arr[10];
	int i;
	
	for (i=0;i<10;i++){
		printf("enter number %d:",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("dao nguoc");
	for(i=9;i>=0;i--){
	printf("%d, ", arr[i]);	
	}
	
}
