#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream readfile;
    readfile.open("Hello.txt");
    if (!readfile) {
        cout << "Error: file not found" << endl;
        return 1;
    }
    string line;
    while (getline(readfile, line)) {
        cout << line << endl;
    }
    readfile.close();
    return 0;
}
