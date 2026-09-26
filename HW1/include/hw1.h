#ifndef AP_HW1_H
#define AP_HW1_H
#include <vector>
#include <cstddef>

using Matrix = std::vector<std::vector<double>>;

namespace algebra {
    // zeros implement this function so that it will create a n x m matrix with all elements equal to zero.
    Matrix zeros(std::size_t n, std::size_t m);
    //ones implement this function so that it will create a n x m matrix with all elements equal to one.
    Matrix ones(std::size_t n, std::size_t m);
    // random implement this function so that it will create a n x m matrix with all elements a random number between min and max
    Matrix random(std::size_t n, std::size_t m, double min, double max);
    // show implement this function so that it will display the matrix in a beautiful way.
    void show(const Matrix& matrix);
}

#endif //AP_HW1_H
