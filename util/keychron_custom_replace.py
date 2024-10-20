import json
import sys
import re

custom_keys = [
    'KC_LOPTN',
    'KC_ROPTN',
    'KC_LCMMD',
    'KC_RCMMD',
    'KC_MCTL',
    'KC_LPAD',
    'KC_TASK',
    'KC_FILE',
    'KC_SNAP',
    'KC_CTANA',
    'KC_SIRI',
    'BT_HST1',
    'BT_HST2',
    'BT_HST3',
    'BAT_LVL',
# 	NEW_SAFE_RANGE
]

def main():
    value = json.load(sys.stdin)
    layers = value['layers']
    def mapper(val):
        mat = re.match(r'CUSTOM\((\d+)\)', val)
        if mat:
            return custom_keys[int(mat.group(1))]
        return val
    value['layers'] = deep_map(mapper, layers)
    json.dump(value, sys.stdout, indent=4)
    sys.stdout.write('\n')


def deep_map(fn, arr):
    if isinstance(arr, list):
        return [deep_map(fn, item) for item in arr]
    return fn(arr)


if __name__ == '__main__':
    main()
