#include <cmath>

int cake_per_1(int people, int cake) {
  return std::ceil(static_cast<double>(cake) / people);
}
