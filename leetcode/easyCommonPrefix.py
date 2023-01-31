# https://leetcode.com/problems/longest-common-prefix/
from utils import test


def main(words):
    prefix = words[0]
    
    for word in words:
        length = min(len(prefix), len(word))
        prefix = prefix[:length]
        for index in range(length):
            if prefix[index] != word[index]:
                prefix = prefix[:index]
                break
    return prefix


if __name__ == '__main__':
    test(main(['dog', 'racecar', 'car']), '')
    test(main(['flower', 'flow', 'flight']), 'fl')
    test(main(['flower', 'flow']), 'flow')
