#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>


#define LEN 10

int len_foo() {
    int i = 2;
    return i;
}
constexpr int len_foo_constexpr() {
    return 5;
}
constexpr int fibonacci(const int n) {
    return n == 1 || n == 2 ? 1 : fibonacci(n-1) + fibonacci(n-2);
}

void foo(std::initializer_list<int> list) {
    for (std::initializer_list<int>::iterator it = list.begin();
        it != list.end(); ++it) {
            std::cout << *it << std::endl;
    }
}

std::tuple<int, double, std::string> f() {
    return std::make_tuple(1, 2.3f, "456");
}

template<typename T, typename U>
auto add2(T x, U y) -> decltype(x+y) {
    return x+y;
}

template<typename T, typename U>
auto add3(T x, U y) {
    return x+y;
}

int main() {
    std::cout << "Run example" << std::endl;

    // 1. decltype
    // if (std::is_same<decltype(NULL), decltype(0)>::value) {
    //     std::cout << "NULL == 0" << std::endl;
    // }
    // if (std::is_same<decltype(NULL), decltype((void*)0)>::value) {
    //     std::cout << "NULL == (void *)0" << std::endl;
    // }
    // if (std::is_same<decltype(NULL), decltype(nullptr)>::value) {
    //     std::cout << "NULL == nullptr" << std::endl;
    // }


    // 2. constexpr
    // char arr_1[10];
    // char arr_2[LEN];
    // int len = 10;
    // char arr_3[len]; // illegal
    // len = 11;
    // const int len_2 = len + 1;
    // constexpr int len_2_constexpr = 1 + 2 + 3;
    // char arr_4[len_2_constexpr];
    // char arr_6[len_foo()];
    // char arr_7[len_foo_constexpr() + 1];
    // std::cout << fibonacci(10) << std::endl;


    // 3. if-switch
    // std::vector<int> vec = {1,2,3,4};
    // auto itr = std::find(vec.begin(), vec.end(), 2);
    // if (itr != vec.end()) {
    //     *itr = 3;
    // }
    // if (auto itr = std::find(vec.begin(), vec.end(), 3);
    //     itr != vec.end()) {
    //     *itr = 4;
    // }
    // for (std::vector<int>::iterator element = vec.begin(); element != vec.end(); element++) {
    //     std::cout << *element << std::endl;
    // }
    // for (auto element = vec.begin(); element != vec.end(); element++) {
    //     std::cout << *element << std::endl;
    // }
    // for (auto e : vec) {
    //     std::cout << e << std::endl;
    // }
    // std::for_each(vec.begin(), vec.end(), [](int x) {
    //     std::cout << x << std::endl;
    // });

    // 4. initializer list
    // foo({1,5,2,3});

    // 5. structured binding
    // auto [x, y, z] = f();
    // std::cout << x << ", " << y << ", " << z << std::endl;

    // 6. auto
    // auto arr = new auto(10);
    // auto auto_arr2[10] = {arr}; // can't infer    

    // 7. decltype
    int res = add3(1, 2.2);


    return 0;
}