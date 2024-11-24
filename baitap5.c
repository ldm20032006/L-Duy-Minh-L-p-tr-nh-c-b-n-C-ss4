#include<stdio.h>
int main(){
	int num1, num2, num3;
	printf("nhap so thu nhat: ");
	scanf("%d", &num1);
	printf("nhap so thu hai: ");
	scanf("%d", &num2);
	printf("nhap so thu 3: ");
	scanf("%d", &num3);
	if(num1 < num3 && num3 < num2 || num2 < num3 && num3 < num1){
		printf("so thu ba nam trong khoang so thu nhat va so thu hai");
	}
	else{
		printf("so thu ba khong nam trong khoang giua so thu nhat va so thu hai");
	}
	return 0;
}
