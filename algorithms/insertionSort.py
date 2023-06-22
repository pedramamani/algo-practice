# 32 minutes
# O(n^2) time, O(1) space
# slicing creates a new list with references to the original items

def insertionSort(values):
    if len(values) <= 1:
        return values
    for index in range(1, len(values)):
        insertionSortHelper(values, index)
    return values

def insertionSortHelper(values, endIndex):
    last = values[endIndex]
    rest = values[:endIndex]
    for index in reversed(range(len(rest))):
        value = values[index]
        if last < value:
            values[index] = last
            values[index + 1] = value
        else:
            break


def main():
    assert insertionSort([]) == []
    assert insertionSort([1]) == [1]
    assert insertionSort([1, 2, 3]) == [1, 2, 3]
    assert insertionSort([2, 1]) == [1, 2]
    assert insertionSort([3, 0, -1, 2, 1]) == [-1, 0, 1, 2, 3]


if __name__ == '__main__':
    main()