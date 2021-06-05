#include<stdio.h>
#include<math.h>

int main(){
	float a,b,c,p,s;
	printf("nhap canh a=");
	scanf("%f",&a);
	printf("nhap canh b=");
	scanf("%f",&b);
	printf("nhap canh c=");
	scanf("%f",&c);
	if((a+b>c)&&(b+c>a)&&(c+a>b)){
		p=(a+b+c)/2;
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("dien tich tam giac la: %f",s);
	}else{
		printf("day khong phai tam giac");
	}
}
