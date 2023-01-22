# https://leetcode.com/problems/3sum/
from utils import test

def twoSum(values, sum):
    pastValues = set()
    pairs = set()
    for value in values:
        complement = sum - value
        if complement in pastValues:
            pastValues.remove(complement)
            pairs.add((value, complement))
        else:
            pastValues.add(value)
    return pairs


def main(values):
    triplets = set()
    for index, value in enumerate(values):
        pairs = twoSum(values[:index] + values[index+1:], -value)
        for pair in pairs:
            triplet = tuple(sorted((*pair, value)))
            triplets.add(triplet)
    return list(map(list, triplets))


if __name__ == '__main__':
    test(main([-1, 0, 1, 2, -1, -4]), [[-1, 0, 1], [-1, -1, 2]])
    test(main([0, 1, 1]), [])
    test(main([0, 0, 0]), [[0, 0, 0]])
