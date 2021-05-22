#include <stdio.h>

int main(){
	int n;
	printf("nhap mot so n:");
	scanf("%d",&n);
	
	int i;// i la uoc cua so n moi nhap
	int s=0;// s la tong uoc cua so n moi nhap
	for(i=1;i<=n;i++){
		if(n%i==0){
			printf("\n uoc cua so la:%d\n",i);
			s=s+i;	
		}
}
	printf("\ntong tat ca uoc cua so do la:%d\n",s);

}
	

