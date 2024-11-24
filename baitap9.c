#include<stdio.h>
int main(){
	int day, month, year;
	printf("nhap ngay: ");
	scanf("%d", &day);
	printf("nhap thang: ");
	scanf("%d", &month);
	printf("nhap nam: ");
	scanf("%d", &year);
	if(year < 0){
		printf("ngay thang nam nhap khong hop le");
		return 0;
	}
	switch(month){
		case 1: case 3: case 7: case 8: case 10: case 12:
			if(day < 1 || day > 31){
				printf("ngay thang nam nhap khong hop le");
				return 0;
			}
			break;
		case 4: case 6: case 9: case 11:
			if(day < 1 || day > 30){
				printf("ngay thang nam nhap	khong hop le");
				return 0;
			}
			break;
		case 2:
			if(year % 400 == 0 || year % 100 != 0 && year % 4 == 0){
				if(day < 1 || day > 29){
					printf("ngay thang nam nhap khong hop le");
					return 0;
				}
			}
			else{
				if( day < 1 || day > 28){
					printf("ngay thang nam nhap khong hop le");
					return 0;
				}
			}
			break;
		default:
			printf("ngay thang nam khong hop le");
			return 0;
	}
	printf("ngay thang nam nhap hop le");
	return 0; 
}
