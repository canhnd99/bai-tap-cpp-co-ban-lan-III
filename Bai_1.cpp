
/*
    Bài tập 1: Viết chương trình tính chiều dài chuỗi (kể cả khoảng trắng)
               (không sử dụng các hàm dựng sẵn trong thư viện)
               str = "nguyen van a"
               ---> chieu dai cua str: 12
               ky tu ket thuc chuoi: '\0'
*/

#include <iostream>
#include <string>
#include <string.h>
using namespace std;

void findLengthOfString(char str[]) {
    cout << "Nhap vao chuoi ky tu:";
    cin.getline(str, 50);
    int counter = 0;
    while(str[counter] != '\0') {
        counter ++;
    }
    cout << "Chieu dai cua chuoi la:" << counter << endl;
}

int main() {
    char str[50];
    bool continued;
    do {
        findLengthOfString(str);
        cout << "Tiep tuc(1-yes, 0-no):";
        int choose;
        cin >> choose;
        if(choose == 1){
            continued = true;
            cin.ignore();
        }else{
            continued = false;
        }
    }while(continued == true);
    return 0;
}
