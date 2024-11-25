# include <stdio.h>

int main(){
	int n,Tong=0;
	do{
		printf("Nhap so nguyen duong:");
		scanf("%d",&n);
		
	}while (n<=0);
	for (int i=1;i <=n; i++){
	     Tong += i;
	}
	printf("Tong cac so tu 1 den %d la %d\n",n,Tong);	
	
	return 0;
}
