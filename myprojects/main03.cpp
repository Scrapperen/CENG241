#include <iostream>

namespace ScopeA {
    void print() {
        std::cout << "Namespace Scope A\n";
    }
}

namespace ScopeB {
    void print() {
        std::cout << "Namespace Scope B\n";
    }
}

using namespace ScopeB;

int main() {
    print();// it uses scopeB
}
