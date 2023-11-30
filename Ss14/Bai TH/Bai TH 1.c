#include<stdio.h>

void hoanDoi(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int x,y;
	printf("x = ");
	scanf("%d",&x);
	printf("y = ");
	scanf("%d",&y);
	printf("Gia tri truoc khi hoan doi: x = %d\ty = %d\n",x,y);
	hoanDoi(&x,&y);
	printf("Gia tri sau khi hoan doi: x = %d\ty = %d\n",x,y);
}
