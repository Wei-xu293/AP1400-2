#include "hw1.h"
#include <random>

namespace algebra {

std::random_device rd;
std::mt19937 gen(rd());

Matrix zeros(std::size_t n, std::size_t m) {
    return Matrix(n, std::vector<double>(m, 0));
}

Matrix ones(std::size_t n, std::size_t m) {
    return Matrix(n, std::vector<double>(m, 1));
}

Matrix random(std::size_t n, std::size_t m, double min, double max) {
    std::uniform_real_distribution<double> dist(min, max);
    Matrix rand(n, std::vector<double>(m));
    for (std::size_t i = 0; i < n; ++i) {
        for (std::size_t j = 0; j < m; ++j) {
            rand[i][j] = dist(gen);
        }
    }
    return rand;
}

}

