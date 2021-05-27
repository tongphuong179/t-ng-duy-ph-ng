#include<stdio.h>

int main(){
	int ary[10];
	int sdlt,i,j,s;
	printf("nhap gia tri:\n");
	for(i=0;i<=10;i++){
		printf("nhap so nguyen=");
		scanf("%d",&ary[i]);
	}for(i=0;i<10;i++){
     if(ary[i]>0){
     	j++;
     	s=j;
     	if(sdlt<s){
     		sdlt=s;
		}
	}		
	}printf(" chuoi phan tu la so duong la %d",sdlt);
}
