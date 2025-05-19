#include "egg_problem.h"
#include <vector>
#include <algorithm>
#include <climits>
#include <limits>

int EggProblem::solveDP(int eggs, int floors)
{
    std::vector<std::vector<int>> dp(eggs + 1, std::vector<int>(floors + 1));

    for (int i = 1; i <= eggs; i++)
    {
        dp[i][0] = 0; // 0 floors require 0 trials
        dp[i][1] = 1; // 1 floor requires 1 trial
    }

    for (int j = 1; j <= floors; j++)
    {
        dp[1][j] = j; // 1 egg requires j trials for j floors
    }

    for (int i = 2; i <= eggs; i++)
    {
        for (int j = 2; j <= floors; j++)
        {
            dp[i][j] = INT_MAX;
            for (int x = 1; x <= j; x++)
            {
                int res = 1 + std::max(dp[i - 1][x - 1], dp[i][j - x]);
                dp[i][j] = std::min(dp[i][j], res);
            }
        }
    }

    return dp[eggs][floors];
}

int EggProblem::solveRecursive(int eggs, int floors)
{
    if (floors <= 0 || // No Floors
        eggs <= 0      // No Eggs
    )
        return 0;
    if (floors == 1)
        return 1; // One Floor
    if (eggs == 1)
        return floors; // One Egg

    int minTrials = std::numeric_limits<int>::max();

    for (int x = 1; x <= floors; x++)
    {
        int res = 1 + std::max(solveRecursive(eggs - 1, x - 1), solveRecursive(eggs, floors - x));
        minTrials = std::min(minTrials, res);
    }

    return minTrials;
}