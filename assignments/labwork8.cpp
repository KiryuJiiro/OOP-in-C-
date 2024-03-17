// #include<iostream>
// #include<fstream>
// using namespace std;

// int main()
// {
//     fstream writefile;
//     writefile.open("a.txt",ios::app);
//     writefile<<"This is a new file";
//     cout<<"Contents added sucessfully";
//     writefile.close();
// }


// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     string f1, f2, f3;
//     cout << "Enter first file with extension .txt: ";
//     cin >> f1;
//     cout << "Enter second file with extension .txt: ";
//     cin >> f2;
//     cout << "Enter third file with extension .txt where contents need to be copied: ";
//     cin >> f3;
//     ifstream readfile(f1);
//     ifstream readfile1(f2);
//     ofstream writefile(f3);

//     if (!readfile.is_open() || !readfile1.is_open() || !writefile.is_open()) {
//         cerr << "Error: Unable to open one or more of the files." << endl;
//         return 1;
//     }

//     string line;

//     // Copy contents from the first file to the third file
//     while (getline(readfile, line)) {
//         writefile << line << endl;
//     }

//     // Copy contents from the second file to the third file
//     while (getline(readfile1, line)) {
//         writefile << line << endl;
//     }

//     cout << "Files merged successfully." << endl;

//     readfile.close();
//     readfile1.close();
//     writefile.close();

//     return 0;
// }


// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     ifstream readfile;
//     readfile.open("c.txt");

//     string s;
//     string content;

//     while (getline(readfile, s)) {
//         content += s;
//     }

//     cout << "Length of characters in the file: " << content.length() << endl;

//     readfile.close();

//     return 0;
// }


// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;

// int main() {
//     ifstream readfile("a.txt");
//     ofstream writefile("b.txt");

//     string s;
//     while (readfile >> s) {
//         for (char &c : s) {
//             c = toupper(c);
//         }
//         writefile << s << " "; // Add a space between words
//     }

//     cout << "Files copied successfully." << endl;

//     readfile.close();
//     writefile.close();

//     return 0;
//}


// #include <iostream>
// #include <fstream>
// #include <string>
// #include <cctype>

// using namespace std;

// int main() {
//     ifstream file("a.txt");  // Replace "sample.txt" with the name of your file
//     if (!file) {
//         cerr << "Error: Could not open the file." << endl;
//         return 1;
//     }

//     string line;
//     int charCount = 0;
//     int wordCount = 0;
//     int lineCount = 0;

//     while (getline(file, line)) {
//         lineCount++;

//         charCount += line.length();  // Count characters in the line

//         bool inWord = false;
//         for (char c : line) {
//             if (isalnum(c)) {
//                 if (!inWord) {
//                     wordCount++;
//                     inWord = true;
//                 }
//             } else {
//                 inWord = false;
//             }
//         }
//     }

//     file.close();

//     cout << "Total characters: " << charCount << endl;
//     cout << "Total words: " << wordCount << endl;
//     cout << "Total lines: " << lineCount << endl;

//     return 0;
// }
