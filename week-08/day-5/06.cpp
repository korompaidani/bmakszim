#include <iostream>
#include <string>

using namespace std;

int fun(int n) {
  if (n > 0) {
    if (n % 2) {
      return 2 + (fun(n - 1));
    } else {
      return 3 + (fun(n - 1));
    }
  } else {
    return 0;
  }
}

int main() {
// We have reindeers standing in a line, numbered 1, 2, ... The odd reindeers
// (1, 3, ..) have the normal 2 antlers. The even reindeers (2, 4, ..) we'll say
// have 3 antlers, because they each have a raised branch (how funny they are, arent they?).
// Recursively return the number of "antlers" in the reindeer line 1, 2, ... n (without loops or
// multiplication).


  cout << fun(5);
  return 0;
}
