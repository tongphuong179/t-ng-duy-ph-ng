#include <stdio.h>
#include <math.h>
int main(){
float a,b,c,d,p,s;
printf("nhap canh a=");
scanf("%f", &a);
printf("nhap canh b=");
scanf("%f", &b);
printf("nhap canh c=");
scanf("%f", &c);
if((a+b>c)&&(b+c>a)&&(c+a>b)){
	d=a+b+c;
	printf("chu vi tam giac bang %f",d);
	p=d/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("dien tich tam giac bang %f",s);
}else{
	printf("khong phai hinh tam giac");

}
}
