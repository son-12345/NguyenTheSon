#include<stdio.h>

char grade(int marks);

int main(){
	
	int ge;
	printf("Enter marks:");
	scanf("%d",&ge);
	
	char result1 = grade(ge);
	printf("\nResult is: %c", result1);
	
}

char grade(int marks){
	
	char g;
	
    if (marks>80){
		g = 'A';
		return g;
	}
	else if(marks>70&&marks<=80){
		g = 'B';
		return g;
	}
	else if(marks>60&&marks<=70){
		g = 'C';
		return g;
	}
	else if(marks>50&&marks<=60){
		g = 'D';
		return g;
	}
	else {
		g = 'F';
		return g;
	}
}

