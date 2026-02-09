#include <regex>
using namespace std;

bool matchRegExpr(const char* str) {
    regex reg(R"(a[a-zA-Z]+a)");
    return regex_search(str, reg);
}
