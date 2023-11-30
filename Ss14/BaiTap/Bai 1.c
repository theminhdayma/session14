#include<stdio.h>

void print(int *variable){
	printf("Cach 2: variable = %d",*variable);
	
}
int main(){
    int variable = 10;
    int *ptrA = &variable;
    printf("cach 1: variable = %d\n",*ptrA);
    printf("ptrA = %d\n", ptrA);  
    print(ptrA);
}
