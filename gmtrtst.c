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
int testformat(char fig[25]){
	int p=0, c=0, i=0;
	while(fig[i]!=')'){
		if(fig[i]=='1' || fig[i]=='2' || fig[i]=='3' || fig[i]=='4' || fig[i]=='5' || fig[i]=='6' || fig[i]=='7' || fig[i]=='8' || fig[i]=='9' || fig[i]=='0')
			{c++;}
		if(fig[i]==',' || fig[i]==' ')
			{p++;}
		i++;
	}
	if(p!=3 || c<3)
		printf("Error: invalid format\n");
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
	testformat(fig);
	return 0;
}
