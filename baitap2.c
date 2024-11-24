#include<stdio.h>
int main(){
	int number;
	printf("hay nhap mot so nguyen: ");
	scanf("%d", &number);
	if(number <0){
		printf("day la so am, hay nhap lai");
	}
	else{
		if(number % 2 == 0){
			printf("day la so chan");
		}
		else{
			printf("day la so le");
		}
	}
	return 0;
}
