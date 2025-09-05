#include <iostream>
#include <initializer_list>
#include <vector>
#include <tuple>
#include <sstream>
#include <string>
#include "log.hpp"

std::tuple<int, double, std::string> f() {
    return std::make_tuple(1, 2.3, "4567");
}

int main() {
    auto [x, y, z] = f();

    Log(x, y, z);

    return 0;
}