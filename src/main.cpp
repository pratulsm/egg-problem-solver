#include <iostream>
#include "egg_problem.h"

int main() {
    EggProblem eggProblem;

    int eggs = 2; // Number of eggs
    int floors = 10; // Number of floors

    int minAttemptsDP = eggProblem.solveDP(eggs, floors);
    int minAttemptsRecursive = eggProblem.solveRecursive(eggs, floors);

    std::cout << "Minimum attempts needed (Dynamic Programming): " << minAttemptsDP << std::endl;
    std::cout << "Minimum attempts needed (Recursive): " << minAttemptsRecursive << std::endl;

    return 0;
}