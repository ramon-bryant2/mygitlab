mkdir -p ~/workspace && cat > ~/workspace/caesar.cpp << 'EOF'
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(int argc, char* argv[]) {
    int shift = atoi(argv[1]);
    string message = "";
    string line;
    while (getline(cin, line)) {
    message += line;
    }

 string encoded = "";
 for (char c : message) {
    if (isalpha(c)) {
        char upper = toupper(c);
        char shifted = (char)(((upper - 'A' + shift) % 26) + 'A');
        encoded += shifted;
        }
    }
 int len = encoded.length();
    int pos = 0;
    int blocksOnLine = 0;
    while (pos < len) {
        string block = encoded.substr(pos, 5);
        cout << block;
