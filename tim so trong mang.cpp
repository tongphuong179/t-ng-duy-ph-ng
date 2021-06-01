#include <stdio.h>

bool timsoxtrongmang(int arr[], int n, int x){
	for(int i=0;i<n;i++){
		if(arr[i]==x){
			printf("co so %d trong mang",x);
		}
	}return 0;
}
int main(){
	int x,n;
	printf("nhap vao kich thuoc mang n=");
	scanf("%d",&n);
	
	int arr[n];
	printf("nhap vao so can tim x=");
	scanf("%d",&x);
	
	for(int i = 0;i<n;i++){
		printf("nhap vao chuoi so i:");
		printf("arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	
	if(timsoxtrongmang(arr,n,x)>0){
		printf("co so %d trong mang",x);
	}
	else{

	}
}
