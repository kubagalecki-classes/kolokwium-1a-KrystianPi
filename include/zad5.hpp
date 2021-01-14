#include "zad1.hpp"

#include <algorithm>
#include <iterator>
#include <deque>
#include <random>
#include <vector>
template<typename T, typename R>
void sortujTagliatelle(T t, R r) {
    std::sort(t, r, []( Tagliatelle a, Tagliatelle b) {return a.ileMaki() > b.ileMaki(); });
}
// tutaj funkcja sortujTagliatelle
