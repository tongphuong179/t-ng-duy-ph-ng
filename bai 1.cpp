#include <stdio.h>

int main(){
	int ary[10];
	int i; 
	int slcc,s;
	for(i=1; i<=10; i++){
	printf("Nhap gia tri %d= ",i);
	scanf("%d",&ary[i]);
	for(s=0; s<=10; s++)
	if(ary[i]%2!=0){
		slcc=ary[i];
	}else{
		//khong chay gi ca
	}
	}printf("So le cuoi cung cua mang la %d", slcc);
}

