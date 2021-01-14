#include "zad1.hpp"

#include <algorithm>
#include <iterator>
#include <deque>
#include <random>
#include <vector>
template<typename T, typename R>
void sortujTagliatelle(T t, R r) {
    std::sort(t, r, [](double a, double b) {return a > b; });
}
// tutaj funkcja sortujTagliatelle
