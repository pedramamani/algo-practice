# https://leetcode.com/problems/coin-change/
from utils import test
import math
from functools import cache


def bad(coins: list[int], amount: int) -> int:
    if amount == 0:
        return 0
    if not len(coins):
        return -1

    minCount = math.inf
    for index, coin in enumerate(coins):
        for count in range(0, amount // coin + 1):
            if count >= minCount:
                break
            minCountComp = bad(coins[index+1:], amount - count * coin)
            if minCountComp != -1:
                minCount = min(minCount, minCountComp + count)

    if math.isinf(minCount):
        return -1
    return minCount


def main(coins, amount):
    counts = [0] + [math.inf] * amount

    for sum in range(1, amount + 1):
        for coin in coins:
            if coin <= sum:
                counts[sum] = min(counts[sum], 1 + counts[sum - coin])
    return -1 if math.isinf(counts[amount]) else counts[amount]


if __name__ == '__main__':
    test(main([], 3), -1)
    test(main([1], 2), 2)
    test(main([1, 2, 5], 0), 0)
    test(main([1, 2, 5], 11), 3)
    test(main([2, 4, 8], 11), -1)
    test(main([186, 419, 83, 408], 6249), 20)
