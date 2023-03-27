#include <iostream>
#include <string>

using namespace std;

string convert_phone_number(string phone_str) {
    string digit_str = "";
    for (int i = 0; i < 7; i++) {
        char c = toupper(phone_str[i]);
        if (c >= 'A' && c <= 'Z') {
            int digit = (c - 'A') / 3 + 2;
            digit_str += to_string(digit);
        } else {
            digit_str += c;
        }
    }
    digit_str.insert(3, "-");
    return digit_str;
}

int main() {
    string phone_str = "HELPNEED";
    string digit_str = convert_phone_number(phone_str);
    cout << digit_str << endl; // prints 435-7633
    return 0;
}
