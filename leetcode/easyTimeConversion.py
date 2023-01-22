# https://leetcode.com/problems/minimum-number-of-operations-to-convert-time/
from utils import test


def main(current, correct):
    minutes = minutesPastMidnight(correct) - minutesPastMidnight(current)
    deltas = [60, 15, 5, 1]
    count = 0

    for delta in deltas:
        count += minutes // delta
        minutes -= (minutes // delta) * delta
    return count


def minutesPastMidnight(time):
    return 60 * int(time[:2]) + int(time[3:])


if __name__ == '__main__':
    test(main('02:30', '04:35'), 3)
