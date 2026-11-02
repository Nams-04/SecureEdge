
#include <iostream>
using namespace std;

// Define two execution modes
enum class Mode {
    NORMAL,
    SECURE
};

int main() {

    Mode currentMode = Mode::SECURE;

    cout << "SecureEdge Platform " << endl;

    if (currentMode == Mode::NORMAL) {
        cout << "Current Mode: NORMAL" << endl;
    }
    else {
        cout << "Current Mode: SECURE" << endl;
    }

    return 0;
}
