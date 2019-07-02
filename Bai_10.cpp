
/*
    Bài 10: viết chương trình thực hiện chuyển các ký tự
            thường --> hoa, hoa --> thường trong một chuỗi.
    Ý tưởng: tương tự bài 9.
*/

#include <iostream>
using namespace std;

void replaceCharacters(char str[])
{
    int i = 0;
    while(str[i] != '\0')
    {
        int ascii = (int)str[i];
        if(ascii >= 97 && ascii <= 122)
        {
            ascii = ascii - 32;
            str[i] = (char)ascii;
        }
        else if(ascii >= 65 && ascii <= 90)
        {
            ascii = ascii + 32;
            str[i] = (char)ascii;
        }
        i++;
    }
    cout << "ket qua: ";
    for(int j = 0; j < i; j++)
        cout << str[j];
    cout << endl;
}

int main()
{
    char str[100];
    cout << "nhap chuoi: ";
    cin.getline(str, 100);
    replaceCharacters(str);
    return 0;
}
