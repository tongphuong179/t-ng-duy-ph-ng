#include <stdio.h>

int main (){
	int lc,lc1,lc2,lc3,lc4,bill;
	bill=0;
	menu:do{
	printf("xin hay chon mon\n");
	printf("\n1 mon an \n2 do uong \n3 thanh toan\n4 thoat ra");
	scanf("%d",&lc);
	if(lc==1){
	printf("\n1 com rang \n2 bun \n3 chao\n4 quay lai menu");
	scanf("%d",&lc1);
	if(lc1==1){
		printf("ban da chon com rang\n");
		bill=bill+40000;
		goto menu;
	    } 
		if(lc1==2){
	    	printf("ban da chon bun\n");
	    	bill=bill+30000;
	    	goto menu;
		}
		if(lc1==3){
			printf("ban da chon chao\n");
			bill=bill+35000;
			goto menu;
		}
		if(lc1==4){
		printf("cam on ban\n");
		goto menu;	
		}
		else{
			printf("moi ban chon lai");
			goto menu;
		}
	}if(lc==2){
		printf("1 tra chanh\n2 nuoc da\n3 nuoc voi \n4 quay lai menu\n");
		scanf("%d",&lc2);
		if(lc2==1){
			printf("ban da chon tra chanh\n");
			bill=bill+12000;
			goto menu;
		}if(lc2==2){
			printf("ban da chon nuoc da\n");
			bill=bill+5000;
			goto menu;
		}if(lc2==3){
			printf("ban da chon nuoc voi\n");
			bill=bill+5000;
			goto menu;
		}if(lc2==4){
			printf("xin cam on\n");
			goto menu;
		}
		else{
			printf("moi ban chon lai\n");
			goto menu;
		}

	}if(lc==3){
		printf("tong bill la %d",bill);
		goto menu;
	}
	
}while(lc<4||lc>4);
printf("cam on ban da den nha hang! \nrat han hanh duoc phuc vu!");
}



