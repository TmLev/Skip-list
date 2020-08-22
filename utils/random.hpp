#ifndef SKIPPER_UTILS_RANDOM_H
#define SKIPPER_UTILS_RANDOM_H

#include <vector>
#include <random>

auto GenerateNumbers(std::size_t count, int min = -100, int max = 100)
    -> std::vector<int> {
  auto rd = std::random_device{};
  auto gen = std::mt19937{rd()};
  auto dis = std::uniform_int_distribution<>{min, max};

  auto numbers = std::vector<int>{};
  numbers.reserve(count);
  for (auto i = std::size_t{0}; i < count; ++i) {
    numbers.push_back(dis(gen));
  }

  return numbers;
}

#endif  // SKIPPER_UTILS_RANDOM_H
