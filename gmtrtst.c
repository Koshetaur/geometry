#include<stdio.h>
#include<stdlib.h>
int testshape(char fig[25]){
	int c=0, i=0;
	char f1[]="circle";
	for(i=0;i<6;i++){
		if(fig[i]==f1[i])
			c++;
		}
	i=0;
	if(c!=6)
		printf("Error: unknown shape\n");
	return 0;
}
int main(){
	int i=0;
	char fig[25];
	printf("write your circle in format 'circle(x y, r)', r with .0 if it is integer\n");
	while(fig[i-1]!=')'){
		scanf("%c", &fig[i]); i++;
	}
	testshape(fig);
	return 0;
}
