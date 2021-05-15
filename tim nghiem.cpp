#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,dt,x1,x2,x,sb;
	printf("\ntim nghiem cua phuong trinh ax^2+bx+c=0\n");
	printf("nhap a=");
	scanf("%f",&a);
	printf("nhap b=");
	scanf("%f",&b);
	printf("mhap c=");
	scanf("%f",&c);

	if(a==0){
		if(b==0){
			if(c==0){
				printf("phuong trinh co vo so nghiem");
			}else{
				printf("phuong trinh vo nghiem ");
			}
		}else{
			float x;
			x=-c/b;
			printf("phuong trinh co 1 nghiem x=c/b %f", x);
		}
    }else{
	float dt,x1,x2;
	dt=b*b-4*a*c;
	printf("dt=%f",dt);
	if (dt<0){
		printf("phuong trinh vo nghiem %f",dt);
	}else{
		if (dt==0){
			x1=x2=-b/(2*a);
			printf("phuong trinh co nghiem kep x1=x2=-b/2*a %f",x1,x2);	
		}else{
			x1=(-b+sqrt(dt))/(2*a);
			x2=(-b-sqrt(dt))/(2*a);
			printf("phuong trinh co nghiem %f");
			printf("x1=%f",x1);
			printf("x2=%f",x2);
			
		}
	}
			
}
}

		
	


