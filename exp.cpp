#include <cmath>

int distance(int x1, int x2) {
  int dist = x1 - x2;
  if (dist < 0) {
    return -dist;
  }
  return dist;
}
