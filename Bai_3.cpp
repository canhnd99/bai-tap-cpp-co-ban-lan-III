
/*
    Bài tập 3: Viết chương trình in ra chuỗi theo thứ tự ngược lại.
               VD: đầu vào: 3.P Training
                   đầu ra: g n i n i a r T P . 3
*/

#include <iostream>
using namespace std;

int findLength(char str[]){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}

void reverseString(char str[]){
    cout << "nhap vao mot chuoi ky tu:";
    cin.getline(str, 50);
    cout << "sau khi dao nguoc: ";
    int len = findLength(str);
    for(int j = len; j >= 0; j--){
        cout << str[j] << " ";
    }
}

int main() {
    char str[50];
    reverseString(str);
    return 0;
}
