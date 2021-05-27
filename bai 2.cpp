#include <stdio.h>

int main(){
	int ary[10];
	int i; 
	for(i=0; i<10; i++){
	printf("Nhap gia tri %d = ",i);
	scanf("%d",&ary[i]);
	}
	int sdnn;
	sdnn=ary[0];
	for(i=1; i<10; i++){	
	if(ary[i]<=sdnn && ary[i]>=0){
		sdnn=ary[i];
	}
	}printf("So duong nho nhat trong mang la %d", sdnn);
}
