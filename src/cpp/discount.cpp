#include "discount.h"

namespace discount {

double apply(double total, int loyalty_years) {
  if (total < 0) {
    throw std::invalid_argument("total must not be negative");
  }
constexpr double NO_DISCOUNT = 0.0;
constexpr double FIVE_PERCENT = 0.05;
constexpr double TEN_PERCENT = 0.10;
constexpr double TWENTY_PERCENT = 0.20;
constexpr double TWENTY_FIVE_PERCENT = 0.25;

double rate = NO_DISCOUNT;
  if (loyalty_years >= 20) {
    rate = TWENTY_FIVE_PERCENT;;
  }
  else if (loyalty_years >= 10) {
    rate = TWENTY_PERCENT;
  }
  else if (loyalty_years >= 5) {
    rate = TEN_PERCENT;
  }
  else if (loyalty_years >= 1) {
    rate = FIVE_PERCENT;
  }
  return total * (1.0 - rate);
}  // namespace discount
