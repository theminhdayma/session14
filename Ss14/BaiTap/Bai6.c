#include <stdio.h>
#include <string.h>

void printMenu(){
    printf("MENU\n");
    printf("1. Nhap vao chuoi\n");
    printf("2. In ra chuoi\n");
    printf("3. Sao chep chuoi vao mot chuoi khac\n");
    printf("4. Them chuoi vao chuoi ban dau\n");
    printf("5. So sanh chuoi voi chuoi ban dau\n");
    printf("6. In ra chuoi dao nguoc\n");
    printf("7. Thoat\n");
    printf("Lua chon cua ban: ");
}
void getString(char *str, int maxLength) {
    printf("Nhap chuoi: ");
    scanf("%s",str);
    if (strlen(str)>=maxLength){
        char temp;
        while((temp=getchar())!='\n'&&temp!=EOF);
    }
}
void printString(char *str){
    printf("Chuoi: %s\n",str);
}

void copyString(char *src, char *dest){
    strcpy(dest,src);
}
void appendString(char *str, char *appendStr){
    strcat(str,appendStr);
}
int compareString(char *str1, char *str2){
    return strcmp(str1, str2);
}
void reverseString(char *str){
    int length = strlen(str);
    for (int i=0;i<length/2;i++){
        char temp = *(str + i);
        *(str+i) =*(str+length-i-1);
        *(str+length-i-1) =temp;
    }
}

int main() {
    int maxLength = 100;
    char str[maxLength];
    char tempStr[maxLength];
    int choice;

    do {
        printMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                getString(str, maxLength);
                break;
            case 2:
                printString(str);
                break;
            case 3:
                copyString(str, tempStr);
                printf("Chuoi da sao chep: %s\n", tempStr);
                break;
            case 4:
                getString(tempStr, maxLength);
                appendString(str, tempStr);
                printf("Chuoi sau khi them: %s\n", str);
                break;
            case 5:
                getString(tempStr, maxLength);
                if (compareString(str, tempStr) == 0) {
                    printf("Chuoi bang chuoi ban dau\n");
                } else {
                    printf("Chuoi khac chuoi ban dau\n");
                }
                break;
            case 6:
                reverseString(str);
                printf("Chuoi dao nguoc: %s\n", str);
                break;
            case 7:
                printf("Thoat\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai!\n");
                break;
        }
    } while (choice != 7);
}
