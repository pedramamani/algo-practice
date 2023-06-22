# 23 minutes
# O(nlog(n)) time, O(n) space
# use "git commit --amend --no-edit" if you forgot to stage a file
# space complexity is O(n) because of depth-first and not O(nlog(n))

def mergeSort(values):
    if len(values) <= 1:
        return values
    middle = len(values) // 2
    first = mergeSort(values[:middle])
    second = mergeSort(values[middle:])

    firstIndex = secondIndex = 0
    for index in range(len(values)):
        if firstIndex == len(first):
            values[index] = second[secondIndex]
            secondIndex += 1
        elif secondIndex == len(second):
            values[index] = first[firstIndex]
            firstIndex += 1
        elif first[firstIndex] <= second[secondIndex]:
            values[index] = first[firstIndex]
            firstIndex += 1
        else:
            values[index] = second[secondIndex]
            secondIndex += 1
    return values


def main():
    assert mergeSort([]) == []
    assert mergeSort([1]) == [1]
    assert mergeSort([2, 1]) == [1, 2]
    assert mergeSort([1, 2, 3]) == [1, 2, 3]
    assert mergeSort([3, 0, -1, 2, 1]) == [-1, 0, 1, 2, 3]


if __name__ == '__main__':
    main()