#include "domain_review.hpp"
#include <cassert>

int main() {
    DomainReview item{53, 34, 22, 86};
    assert(domain_review_score(item) == 160);
    assert(domain_review_lane(item) == "ship");
}
