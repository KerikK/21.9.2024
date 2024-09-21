//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int main()
//{
//    cout << "Enter sentence:\n";
//    string text;
//    getline(cin, text);
//
//
//    transform(text.begin(), text.end(), text.begin(), ::tolower);
//    int c;
//    cout << "Enter setntence:\n";
//    cin >> c;
//    c--;
//
//    if (c >= 0 && c < text.size()) {
//        text.erase(c, 1);
//        cout << endl << text;
//    }
//    else {
//        cout << endl << "eror";
//    }



//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int main()
//{
//    cout << "Enter sentence:\n";
//    string text;
//    getline(cin, text);
//
//
//    transform(text.begin(), text.end(), text.begin(), ::tolower);
//    string line;
//    getline(cin, line);
//
//    int c;
//    cout << "Enter setntence:\n";
//    cin >> c;
//    c--;
//
//    if (c >= 0 && c < text.size()) {
//       // text.erase(c, 1);
//        text.insert(c, line);
//        cout << endl << text;
//    }
//    else {
//        cout << endl << "eror";
//    }
//}



#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstring>
#include <Windows.h>
using namespace std;

int main()
{
    string ip;
    getline(cin, ip);
    long suma = 0;
    for (char s : ip) {
        if (s == '.') suma++;
    }
    if (suma > 3)
        cout << "Некоректний адрес";
}
