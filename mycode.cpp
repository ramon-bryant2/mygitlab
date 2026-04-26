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
