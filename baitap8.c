#include<stdio.h>
int main(){
	float a,b,c;
	printf("nhap canh thu nhat: ");
	scanf("%f", &a);
	printf("nhap canh thu hai: " );
	scanf("%f", &b);
	printf("nhap canh thu ba: ");
	scanf("%f", &c);
	if (a + b > c){
		if(a + c > b){
			if(b + c > a){
				printf("day la 3 canh cua 1 tam giac");
			}
			else{
				printf("day khong phai 3 canh cua 1 tam giac");
			}
		}
	}
	return 0;
}
