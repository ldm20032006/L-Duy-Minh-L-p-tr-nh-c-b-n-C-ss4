#include<stdio.h>
int main(){
	int number;
	int chia;
	printf("hay nhap so nguyen: ");
	scanf("%d", &number);
	if(number % 3 == 0 && number % 5 == 0){
		printf("day la so chia het cho ca 3 va 5");
	}
	else if(number % 3 == 0){
		printf("day la so chia het cho 3");
	}
	else if(number % 5 == 0){
		printf("day la so chia het cho 5");
	}
	else{
		printf("day la so khong chia het cho ca 3 va 5");
	}
	return 0;
}
