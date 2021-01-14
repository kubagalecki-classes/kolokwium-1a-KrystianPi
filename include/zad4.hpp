#include "zad1.hpp"

#include <vector>
double obliczMake(const std::vector<Tagliatelle>& v) {
    double M;
    M = v[v.size() - 1].ileMaki(1) + v[v.size() - 2].ileMaki(2) + v[v.size() - 3].ileMaki(3);
    if (M > 100) {
        throw 1;
    }
    else if (M > 50 && M <= 100) {
        throw 2.;
    }
    else if(M<=50) {
        return M;
    }


}
// tutaj funkcja obliczMake
