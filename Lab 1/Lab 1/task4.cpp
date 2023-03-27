#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char *str) {
    int len = strlen(str);
    char *front = str;
    char *rear = str + len - 1;

    while (front < rear) {
        char temp = *front;
        *front = *rear;
        *rear = temp;
        front++;
        rear--;
    }
}

int main() {
    char str1[] = "hello";
    reverseString(str1);
    cout << str1 << endl;

    char str2[] = "world";
    reverseString(str2);
    cout << str2 << endl;

    return 0;
}