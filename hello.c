#include <stdio.h>

int main(void) {
	// your code goes here
	int age ;
	printf("Enter the age\n");
	scanf("%d",&age);
	if (age>=18){
	    printf("Yes\n");
	}
	else{
	    printf("No\n");
	}
	return 0;
}