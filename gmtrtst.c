#include<stdio.h>
#include<stdlib.h>
int poww(int x, int y){
	int i=0, x1=1;
	for(i=0;i<y;i++){
		x1*=x;
	}
	return x1;
}
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
int testcircle(char fig[25]){
	int i=0, c=0, f;
	float r=0;
	while(fig[i]!=')'){
		i++;}
	while(fig[i-1]!='.'){
		i--;
		if(fig[i]==' '){
			printf("Error: invalid format\n");
			break;
		}
		else{
			f=atoi(&fig[i]);
			r=(r/10)+f;
			f=0;
		}
	}
	i-=2; r/=10; f=0;
	while(fig[i]!=' '){
		f=atoi(&fig[i]);
		r+=(f*poww(10,c));
		c++; i--; f=0;
	}
	if (r<=0)
		printf("Error: invalid circle\n");
	return 0;
}
int main(){
	int i=0;
	char fig[25];
	printf("write your circle in format 'circle(x y, r)', r with .0 if it is integer\n");
	//circle(0 0, 1.5)
	while(fig[i-1]!=')'){
		scanf("%c", &fig[i]); i++;
	}
	testshape(fig);
	testformat(fig);
	testcircle(fig);
	return 0;
}
