#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

// tutaj klasa Penne
class Penne : public Makaron {
public:
    double ileMaki(unsigned P) const override { return double(P); }
};
// tutaj definicja metody gotujMakaron
 Makaron* Makaron::gotujMakaron(const std::string& s) {
     Makaron* a;
     if (s.front() == s.back()) {
         a = new Tagliatelle(3.14, 0.42, 0.1);
     }
     else {
         a = new Penne;
     }
 
     return a;
 }
