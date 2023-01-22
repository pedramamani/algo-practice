class color:
    none = '\033[0m'
    red = '\033[91m'
    green = '\033[92m'
    blue = '\033[94m'


def test(value, expected):
    if value == expected:
        print(f'{color.green}{value} = {expected}{color.none}')
    else:
        print(f'{color.red}{value} ≠ {expected}{color.none}')
