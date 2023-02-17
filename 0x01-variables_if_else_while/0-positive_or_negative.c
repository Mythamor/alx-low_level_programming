#include <iostream>
#include <stdlib>
#include <time>

/* main - entry point
* return - 0 (Success)
*/

int main(void)
{
    std::srand(std::time(nullptr));
    int n = std::rand() % RAND_MAX;

    std::cout << n << " ";
    if (n > 0) {
        std::cout << "is positive" << std::endl;
    } else if (n == 0) {
        std::cout << "is zero" << std::endl;
    } else {
        std::cout << "is negative" << std::endl;
    }

    return (0);
}
