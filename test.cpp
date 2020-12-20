#include <iostream>
using namespace std;

bool checkWin() {
    #ifdef __WIN32__
        return true;
    #else
        return false;
    #endif
}

int main() {
    cout << "Windows: " << checkWin() << endl;

    return 0;
}
