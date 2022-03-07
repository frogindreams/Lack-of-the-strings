#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;

int main() {
    string sClear{ "String for clear function" };

    sClear.insert(0, 1, '>');
    cout << sClear << '\n';

    sClear.erase(0, 1);
    cout << sClear << '\n';

    sClear.clear();
    cout << "is empty => " << sClear.empty() << '\n';
    cout << '\n';


    string* arrayOfWords = new string[20];
    char buf[10];

    for (int iter = 0; iter < 20; ++iter) {
        cout << iter << " => ";
        cin.getline(buf, 10, '\n');
        arrayOfWords[iter] = buf;
    } cout << '\n';

    for (int iter = 0; iter < 20; iter += 2) { 
        if (arrayOfWords[iter] != "") {
            cout << "<= " << arrayOfWords[iter] << '\n'; 
        }
    }

    return 0;
}
