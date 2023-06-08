// Reverse Words in a string ||
//    I/p - {'t', 'h', 'e', ' ', 's', 'k', 'y', ' ', 'i', 's', ' ', 'b', 'l', 'u', 'e'}
//    O/p - {'b', 'l', 'u', 'e', ' ', 'i', 's', ' ', 's', 'k', 'y', ' ', 't', 'h', 'e'}

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

void reversy(char str[], int start, int end) {
    while(start < end) {
        swap(str[start++], str[end--]);
    }
}

void reverseWordsInAString(char str[]) {
    int i = 0, j = 0;
    while(j < strlen(str)){
        if(str[j+1] == ' ' || j+1 == strlen(str)){
            reversy(str, i, j);
            i = j + 2;
        }
        j++;
    }
    reversy(str, 0, strlen(str) - 1);
    cout << str;
}

int main() {
    char str[20];
    cout << "enter the string: ";
    cin.getline(str, 30);
    cout << endl;
    reverseWordsInAString(str);
}