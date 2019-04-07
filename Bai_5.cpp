
/*
    Bài tập 5: Đếm số chữ cái, chữ số và ký tự đặc biệt trong một chuỗi.
    VD: chuỗi đầu vào: welcome to 3.P Training
        --> so luong chu cai: 18
        --> so luong chu so: 1
        --> so luong ky tu dac biet: 4

        Nếu là chữ cái : (>= 'a' và <= 'z') hoặc (>= 'A' và <= 'Z')
        Nếu là chữ số : >= '0' và <= '9'
        Nếu là ký tự đặc biệt: Còn lại
*/

#include <iostream>
using namespace std;

void countElementsInString(char str[]){
    // Nhập vào một chuỗi.
    cout << "nhap vao chuoi:";
    cin.getline(str, 50);

    // Đếm.
    int chu_cai, chu_so, ky_tu;
    chu_cai = chu_so = ky_tu = 0;

    int i = 0; // Biến đếm cho vòng while.
    while(str[i] != '\0'){
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            chu_cai ++;
        else if (str[i] >= '0' && str[i] <= '9')
            chu_so ++;
        else
            ky_tu ++;
        i++;
    }

    // In ra màn hình kết quả.
    cout << "so luong chu cai: " << chu_cai << endl;
    cout << "so luong chu so: " << chu_so << endl;
    cout << "so luong ky tu dac biet: " << ky_tu << endl;
}

int main() {
    char str[50];
    countElementsInString(str);
    return 0;
}
