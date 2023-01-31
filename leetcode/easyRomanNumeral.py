# https://leetcode.com/problems/roman-to-integer/
from utils import test
import re

SymbolToValue = {
    'IV': 4,
    'IX': 9,
    'I': 1,
    'V': 5,
    'XL': 40,
    'XC': 90,
    'X': 10,
    'L': 50,
    'CD': 400,
    'CM': 900,
    'C': 100,
    'D': 500,
    'M': 1000
}
Pattern = '|'.join(SymbolToValue.keys())


def main(text):
    value = 0
    for match in re.findall(Pattern, text):
        value += SymbolToValue[match]
    return value


if __name__ == '__main__':
    test(main('III'), 3)
    test(main('MCMXCIV'), 1994)
