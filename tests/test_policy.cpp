#include "policy.hpp"
#include <cassert>

int main() {
    Signal signal_case_1{75, 91, 27, 5, 4};
    assert(score_signal(signal_case_1) == 129);
    assert(classify_signal(signal_case_1) == "review");
    Signal signal_case_2{88, 82, 16, 11, 6};
    assert(score_signal(signal_case_2) == 174);
    assert(classify_signal(signal_case_2) == "accept");
    Signal signal_case_3{95, 105, 21, 7, 13};
    assert(score_signal(signal_case_3) == 235);
    assert(classify_signal(signal_case_3) == "accept");
}
