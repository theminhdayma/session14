#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void inputArray(int *arr, int size){
	printf("Nhap cac phan tu vao mang: \n");
	for(int i=0;i<size;i++){
		printf("arr[%d]= ",i);
		scanf("%d",arr + i);
	}
}
void outputArray(int *arr, int size){
	printf("Cac phan tu trong mang la: \n");
	for(int i=0;i<size;i++){
		printf("numbers[%d] = %d\n",i,*(arr + i));
	}
}

int main(){
	int number[100];
	int number2[100];
	int size, size2;
	char character;
	int count;
	do{
		printf("********MENU*********\n");
		printf("1.Nhap vao mang\n");
		printf("2.In ra mang\n");
		printf("3.Sao chep mang vao mang khac\n");
		printf("4.Nhap vao mang khac, doi cho 2 mang voi nhau\n");
		printf("5.Dao nguoc mang\n");
		printf("6.Nhap vao mot ki tu, tim kiem ki tu do trong mang\n");
		printf("7.Thoat\n");
		int choice;
		printf("Moi ban chon: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap kich thuoc cho mang: ");
				scanf("%d",&size);
				inputArray(number,size);
				break;
			case 2:
				outputArray(number,size);
				printf("\n");
				break;
			case 3:
				for(int i=0;i<size;i++){
					number2[i]=number[i];
				}
				printf("Mang da sao chep sang la: \n");
				for(int i=0;i<size;i++){
					printf("number2[%d] = %d\n",i,number2[i]);
				}
				break;
			case 4:
				printf("Nhap kich thuoc cho mang khac: ");
			    scanf("%d", &size2);
			    inputArray(number2, size2);			
			    // Doi cho 2 mang
			    int temp[100];
			    memcpy(temp, number, size * sizeof(int));
			    memcpy(number, number2, size2 * sizeof(int));
			    memcpy(number2, temp, size * sizeof(int));
			
			    printf("Da doi cho hai mang voi nhau.\n");
				break;
			case 5:
				printf("Mang sau khi dao nguoc la: ");
				for(int i = size-1;i>=0;i--){
						printf("%d\t",number[i]);					
				}
				printf("\n");				
				break;
			case 6:
				count = 0;
				printf("Nhap vao 1 ki tu bat ky: ");
				scanf("%d",&character);
				for(int i=0;i<size;i++){
					if(number[i]==character){
						count++;
					}
				}
				printf("\nCo %d gia tri %d trong mang\n", count,character);
				break;
			case 7:
				printf("Ket thuc chuong trinh\n");
				exit(0);
			default:
				printf("Khong hop le\n");
		}
	}while(1==1);
}
