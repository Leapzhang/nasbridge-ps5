#!/usr/bin/env python3
"""Write the GB 2312 repertoire as hexadecimal Unicode code points."""

chars = set()
for lead in range(0xA1, 0xF8):
    for trail in range(0xA1, 0xFF):
        try:
            chars.add(ord(bytes((lead, trail)).decode("gb2312")))
        except UnicodeDecodeError:
            pass

# A few common title characters outside the original GB 2312 repertoire.
chars.update(ord(c) for c in "·〇囧")
for codepoint in sorted(chars):
    print(f"{codepoint:X}")
