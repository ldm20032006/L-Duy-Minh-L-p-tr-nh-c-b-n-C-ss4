#include<stdio.h>
int main(){
	float soDienCu, soDienMoi, soDien, tienDien;
	printf("vui long nhap so dien cu: ");
	scanf("%f", &soDienCu);
	printf("vui long nhap so dien moi: ");
	scanf("%f", &soDienMoi);
	soDien = soDienMoi - soDienCu;
	if(soDien >= 0 && soDien < 50){
		tienDien = soDien * 10000;
		printf("tien dien cua ban la: %.3f", tienDien);
	}
	else if(soDien < 100){
		tienDien = soDien * 15000;
		printf("tien dien cua ban la: %.3f", tienDien);
	}
	else if(soDien < 150){
		tienDien = soDien * 20000;
		printf("tien dien cua ban la: %.3f", tienDien);
	}
	else if(soDien < 200){
		tienDien = soDien * 25000;
		printf("tien dien cua ban la: %.3f", tienDien);
	}
	else{
		tienDien = soDien * 30000;
		printf("tien dien cua ban la: %.3f", tienDien);
	}
	return 0;
}


	


