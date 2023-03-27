#include <iostream>
#include <cstring>

using namespace std;

int count_pair_occurrences(char str[], char pair[]) {
    int len = strlen(str);
    int pair_len = strlen(pair);
    int count = 0;
    for (int i = 0; i < len - pair_len + 1; i++) {
        bool is_pair = true;
        for (int j = 0; j < pair_len; j++) {
            if (str[i+j] != pair[j]) {
                is_pair = false;
                break;
            }
        }
        if (is_pair) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[] = "The lack of sleep is too much. I need to be sleeping more. sleeping.";
    char pair[] = "ee";
    int count = count_pair_occurrences(str, pair);
    cout << "This string contains " << count << " occurrences of the pair." << endl;
    return 0;
}
