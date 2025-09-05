#include <iostream>
#include <initializer_list>>
#include <vector>


class MagicFoo {
public:
    std::vector<int> vec;
    MagicFoo(std::initializer_list<int> list) {
        for (auto it = list.begin(); it != list.end(); ++it) {
            vec.push_back(*it);
        }
    }

    void foo(std::initializer_list<int> list) {
        for (auto it = list.begin(); it != list.end(); ++it) {
            vec.push_back(*it);
        }
    }
};

int main() {
    MagicFoo foo = {1,2,3,4,5};
    foo.foo({11,12,13,14,15});
    for (auto it = foo.vec.begin(); it != foo.vec.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}