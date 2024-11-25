#include <stdio.h>

int main(){
	int i,n;
	printf("Nhap so nguyen duong tu 1 den 10:");
	scanf("%d", &i);

	printf ("Bang cuu chuong nhan %d\n",i);
	for (int n=1;n<=10;n++){
		int S=i*n;
        printf("%d x %d= %d\n",i,n,S);
		}
		return 0;
	 
} 
