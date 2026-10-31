#include <iostream>
using namespace std;

class R {
    int i;
    //const int j;
    int &ref;

    public:
    R(int);
};
R::R(int x) : ref(x) {
    i = x;
    //j = x;
}

int main() {
    
    R r1(10);
    
    return 0;
}