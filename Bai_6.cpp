/*
    Bài tập 6: Tìm ký tự xuất hiện nhiều nhất trong chuỗi (chuỗi chứa khoảng trắng).
    TH1: CHỈ CÓ MỘT ký tự xuất hiện nhiều nhất.
    TH2: NHIỀU ký tự có số lần xuất hiện nhiều nhất bằng nhau.
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int AsciiArray[255];

// tra gia tri ascii cua phan tu co so lan xuat hien nhieu nhat.
int findIndex(string str)
{
    for(int i = 0; i < 255; i++)
        AsciiArray[i] = 0;

    int i = 0;
    while(str[i] != '\0')
    {
        int ascii = (int)str[i];
        AsciiArray[ascii] += 1;
        i++;
    }

    int max_index = 0;
    for(int i = 0; i < 255; i++)
    {
        if(i != 32)
        {
            if(AsciiArray[i] > AsciiArray[max_index])
                max_index = i;
        }
    }
    return max_index; // co duoc ma ascii cua phan tu xuat hien nhieu nhat.
}

void printResult(string str)
{
    int index = findIndex(str);
    vector<int> v;
    for(int i = 0; i < 255; i++)
    {
        if(AsciiArray[i] == AsciiArray[index])
            v.push_back(i);
    }
    if(v.size() == 1)
    {
        cout << "==> ky tu xuat hien nhieu nhat: " << (char)v[0] << endl;
        cout << "==> so lan xuat hien: " << AsciiArray[index] << endl;
    }
    else
    {
        cout << "==> cac ky tu xuat hien nhieu nhat: ";
        for(int i = 0; i < v.size(); i++)
            cout << (char)v[i] << " ";
        cout << endl;
        cout << "==> so lan xuat hien: " << AsciiArray[index] << endl;
    }
}

int main()
{
    string str;
    cout << "nhap vao mot chuoi: ";
    getline(cin, str);
    printResult(str);
    return 0;
}
