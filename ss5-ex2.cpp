#include <stdio.h>

int main(){
	int soNhap;
	 while (1) {
        printf("Nhap mot so nguyen: ");
        scanf("%d", &soNhap); 
        
    if (soNhap==10){
    	goto end;
	}else{
		printf("Nhap lai\n");
		}
	}
	end:
	return 0;
}
