# https://leetcode.com/problems/running-sum-of-1d-array
from utils import test


def main(nums: list[int]) -> list[int]:
    for i, num in enumerate(nums):
        if i == 0:
            continue
        nums[i] = nums[i-1] + num
    return nums


if __name__ == '__main__':
    test(main([1, 2, 3]), [1, 3, 6])
    test(main([]), [])
