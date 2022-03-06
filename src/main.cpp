#include <iostream>
#include <string>

using std::string;

int main() {
    string sClear{ "String for clear function" };

    sClear.insert(0, 1, '>');
    std::cout << sClear << '\n';

    sClear.erase(0, 1);
    std::cout << sClear << '\n';

    sClear.clear();
    std::cout << "is empty => " << sClear.empty() << '\n';

    return 0;
}
