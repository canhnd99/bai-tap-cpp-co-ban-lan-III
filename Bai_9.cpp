
/*
    Bài 9: chuyển chuỗi từ sang dạng in hoa (hoặc in thường).
    ==> Ý Tưởng: dự vào sự chênh lệch của mã Ascii chữ hoa và
                 chữ thường của mỗi ký tự trong chuỗi.
*/
#include <iostream>
using namespace std;

void convertInUppercase(char str[])
{
    int i = 0;
    while(str[i] != '\0')
    {
        int ascii = (int)str[i]; // lay ma ascii cua ky tu o vi tri i.
        if(ascii >= 97 && ascii <= 122)
        {
            ascii = ascii - 32;
            str[i] = (char)ascii;
        }
        i++;
    }
    cout << "string in uppercase: ";
    for(int j = 0; j < i; j++)
        cout << str[j];
    cout << endl;
}

int main()
{
    char str[100];
    cout << "nhap chuoi: ";
    cin.getline(str, 100);
    convertInUppercase(str);
    return 0;
}
