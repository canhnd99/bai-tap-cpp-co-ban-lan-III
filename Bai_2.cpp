
/*
    Bài tập 2: Viết chương trình để tách chuỗi thành các ký tự riêng rẽ.
               VD: chuỗi đầu vào: str = "3.P Training"
                   đầu ra: 3 . P  T r a i n i n g
*/

#include <iostream>
#include <string>
#include <string.h>
using namespace std;

void separateStringIntoCharacters(string str){
    cout << "Nhap vao mot chuoi: ";
    //cin.getline(str, 50);
    getline(cin, str);
    int i = 0;
    cout << "separated string: ";
    while(str[i] != '\0'){
        cout << str[i] << " ";
        i++;
    }
    cout << endl;
    cout << "--------------\n";
    for(i = 0; i < str.size(); i++){
        cout << str[i] << " ";
    }
}

int main() {
    //char str[50];
    string str;
    separateStringIntoCharacters(str);
    return 0;
}
