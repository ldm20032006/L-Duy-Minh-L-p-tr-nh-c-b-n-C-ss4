#include<stdio.h>
int main(){
	int year;
	printf("hay hap nam: ");
	scanf("%d", &year);
	if(year < 0){
		printf("nam nhap khong hop le");
	}
	else{
		if(year % 400 == 0 || year % 100 && year % 4 == 0){
			printf("day la nam nhuan");
		}
		else{
			printf("day khong phai nam nhuan");
		}
	}
	return 0;
}
