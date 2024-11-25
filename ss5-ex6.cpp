#include <stdio.h>

int main(){
	int menu;
	float num1,num2;
	printf("Nhap so thu nhat: ");
    scanf("%f", &num1);
    printf("Nhap so thu hai: ");
    scanf("%f", &num2);
    for (;;) { 
        printf("\nCALCULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &menu);
    switch(menu){
    	case 1:
    		printf("Tong 2 so la:%f\n",num1 + num2);
    		break;
    	case 2:
    		printf("Hieu 2 so la:%f\n",num1 - num2);
    		break;
    	case 3:
    		printf("Tich 2 so la:%f\n",num1 * num2);
    		break;
    	case 4:
    		if(num2!=0){
    			printf("Thuong 2 so la:%.2f\n",num1 / num2);
			}else
			    printf("Khong the chia cho 0.\n");
			break;
	    case 5:
	    	printf("Thoat chuong trinh.\n");
	    	return 0;
	    default:
	    	printf("Lua chon khong hop le.Vui long thu lai.");
    		
    		}
}
	
	return 0;
}
