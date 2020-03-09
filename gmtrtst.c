#include<stdio.h>
#include<stdlib.h>
int main(){
	int i=0;
	char fig[25];
	printf("write your circle in format 'circle(x y, r)', r with .0 if it is integer\n");
	while(fig[i-1]!=')'){
		scanf("%c", &fig[i]); i++;
	}
	return 0;
}
