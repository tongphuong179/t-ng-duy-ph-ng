#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c,cv,p,dt;
	printf("nhap 3 so la 3 canh cua tam giac\n");
	printf("canh a=");
	scanf("%f",&a);
	printf("canh b=");
	scanf("%f",&b);
	printf("canh c=");
	scanf("%f",&c);
	
	do{printf("so vua nhap vao khong dung 3 canh tam giac\n nhap lai\n");
	printf("canh a=");
	scanf("%f",&a);
	printf("canh b=");
	scanf("%f",&b);
	printf("canh c=");
	scanf("%f",&c);
	}while (a+b>c && b+c>a && c+a>b);
	cv=a+b+c;
	p=cv/2;
	dt=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("cv tam giac=%f\n dt tam giac=%f",cv,dt);
	return 0;	
	
}
