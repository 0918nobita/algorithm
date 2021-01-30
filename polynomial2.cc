#include <iostream>
#include <vector>

int main() {
  int X0, N;
  std::cin >> X0 >> N;
  std::vector<int> A(N);

  for (int i = 0; i < N; i++) {
    std::cin >> A[i];
  }

  if (N < 1) {
    std::cout << 0 << std::endl;
  } else {
    int S = A[N - 1];

    for (int i = N - 1; i >= 1; i--) {
      S = S * X0 + A[i - 1];
    }

    std::cout << S << std::endl;
  }
  return EXIT_SUCCESS;
}
