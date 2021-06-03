#include <stdio.h>

void insole(int arr[],int n){
	for(int i=0;i<n;i++){
		if(arr[i]%2==1)
		printf("%5d",arr[i]);
	}
}

int main(){
	int n;
	printf("nhap kich thuoc mang n=");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	insole(arr,n);
}
