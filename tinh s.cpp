#include <stdio.h>
#include <math.h>

int main(){
	int a,b,s;
	s=0;
	a=1;
	b=1000000;
	
	while (a<=b){
		s=s+a;
		a++;
	}
	printf("s=%d",s);
}
