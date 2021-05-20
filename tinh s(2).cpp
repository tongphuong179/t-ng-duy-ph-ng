#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c,s;
	s=0;
	a=1;
	b=1/(a++);
	c=1/1000;
	while (a<=c){
		s=s+(a/b);
		a=a/(b++);
	}
	printf("s=%f",s);
}
