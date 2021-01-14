#include "zad1.hpp"

#include <algorithm>
#include <iterator>
#include <deque>
#include <random>
#include <vector>
template<typename T, typename R>
void sortujTagliatelle(T t, R r) {
    std::sort(t, r, []( Tagliatelle a, Tagliatelle b) {return a.ileMaki(1) > b.ileMaki(1); });
}
// tutaj funkcja sortujTagliatelle
