#include <iostream>
using namespace std;

class Constructor {
    
    public:
    Constructor() {
        cout << "Constructor called!" << endl;
    }
};

int main() {
    Constructor c1;
    Constructor c2;
    

    return 0;
}