#include <iostream>

using namespace std;

int age {18};  // This Makes This A Global Variable Can Be Accesed From Anywhere

int main() {
    int age {18};        // Defineing and Initializing This Variable Here Makes It Locally Scoped To This Function
    cout << age << endl;  // First The Compiler Looks Locally for Variables So Can Have Local and Global Variables
    return 0;             // Is Better To Locally Scope Variables
}
