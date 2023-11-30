#include<stdio.h>

void swap(int *var1, int *var2){
	int temp = *var1;
	*var1 = *var2;
	*var2 = temp;
	int signal = *var1 - *var2;
	printf("Hieu cua 2 bien sau khi doi cho la: %d\n",signal);
}
int main(){
	int var1 = 10;
	int var2 = 15;
	int signal = var1 - var2;
	printf("Hieu cua 2 bien truoc khi doi cho la: %d\n",signal);
	//Doi cho va tinh hieu
	swap(&var1, &var2);
}
