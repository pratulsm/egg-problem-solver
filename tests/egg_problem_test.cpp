#include <gtest/gtest.h>
#include "../src/egg_problem.h"

class EggProblemTest : public ::testing::Test {
protected:
    EggProblem eggProblem;
};

TEST_F(EggProblemTest, TestSolveDP) {
    EXPECT_EQ(eggProblem.solveDP(1, 1), 1);
    EXPECT_EQ(eggProblem.solveDP(2, 2), 2);
    EXPECT_EQ(eggProblem.solveDP(2, 10), 4);
    EXPECT_EQ(eggProblem.solveDP(3, 14), 4);
}

TEST_F(EggProblemTest, TestSolveRecursive) {
    EXPECT_EQ(eggProblem.solveRecursive(1, 1), 1);
    EXPECT_EQ(eggProblem.solveRecursive(2, 2), 2);
    EXPECT_EQ(eggProblem.solveRecursive(2, 10), 4);
    EXPECT_EQ(eggProblem.solveRecursive(3, 14), 4);
}