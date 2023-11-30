#include<stdio.h>
#include<string.h>
 
int main(){
	char str1[100], str2[100];
	char *ptr1, *ptr2;
	printf("Nhap chuoi 1: ");
	scanf("%s",&str1);
	printf("Nhap chuoi 2: ");
	scanf("%s",&str2);
	ptr1=str1;
	ptr2=str2;
	printf("Do dai chuoi 1 la: %d\n",strlen(ptr1));
	printf("Do dai chuoi 2 la: %d\n",strlen(ptr2));
	if(strlen(ptr1)>strlen(ptr2)){
		printf("Chuoi 1 lon hon chuoi 2\n");
	}else if(strlen(ptr1)<strlen(ptr2)){
		printf("Chuoi 2 lon hon chuoi 1\n");
	}else{
		printf("Do dai 2 chuoi bang nhau\n");
	}
}
