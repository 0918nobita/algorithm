#include <cmath>
#include <iostream>
#include <numeric>
#include <vector>

int main() {
  int X0, N;
  std::cin >> X0 >> N;
  std::vector<int> S(N);

  for (int i = 0; i < N; i++) {
    int a;
    std::cin >> a;
    S[i] = a * std::pow(X0, i);
  }

  std::cout << std::accumulate(S.begin(), S.end(), 0) << std::endl;

  return EXIT_SUCCESS;
}
