#include<stdio.h>
int main(){
	int number;
	printf("hay nhap mot so nguyen: ");
	scanf("%d", &number);
	if(number > 0){
		printf("day la so nguyen duong");
	}	
	else{
		printf("day la so nguyen am");	
	}
	return 0;
}
