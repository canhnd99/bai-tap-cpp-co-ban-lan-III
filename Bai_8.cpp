/*
    Bài 8: viết chương trình tách một chuỗi phụ từ chuỗi được cho.
*/

#include <iostream>
#include <string>
using namespace std;

void exstractSubstring(string str)
{
    int pos, len;
    char sub_str[100];
    cout << "vi tri cat: ";
    cin >> pos;
    cout << "chieu dai chuoi con: ";
    cin >> len;

    int i = 0;
    while(i < len)
    {
        sub_str[i] = str[pos+i-1];
        i++;
    }
    sub_str[i] = '\0';
    cout << "sau khi cat: ";
    for(int j = 0; j < i; j++)
        cout << sub_str[j];
    cout << endl;
}

int main()
{
    string str;
    cout << "nhap chuoi: ";
    getline(cin, str);
    exstractSubstring(str);
    return 0;
}
