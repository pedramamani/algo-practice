# https://leetcode.com/problems/minimum-cost-for-tickets/
from utils import test
from math import inf


def main(days, costs):
    validities = [1, 7, 30]
    n = len(days)
    f = [inf] * n + [0]

    for iBeginDay in reversed(range(n)):
        iEndDay = iBeginDay
        for validity, cost in zip(validities, costs):
            while iEndDay < n and days[iBeginDay] + validity > days[iEndDay]:
                iEndDay += 1
            f[iBeginDay] = min(f[iBeginDay], f[iEndDay] + cost)
    return f[0]


if __name__ == '__main__':
    test(main([1, 4, 6, 7, 8, 20], [2, 7, 15]), 11)
    test(main([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 30, 31], [2, 7, 15]), 17)
