#include <stdio.h>
#include <math.h>

int main(){
	double pv,i,n,pvn;
	
	printf("nhap so tien von: \n");
	scanf("%lf",&pv);
	printf("nhap lai: \n");
	scanf("%lf",&i);
	printf("nhap so nam: \n");
	scanf("%lf",&n);
	
	i = i/100;
	pvn = pv*(pow(1+i,n));
	printf("tong lai sau 4 nam la: %lf", pvn);
		
}
