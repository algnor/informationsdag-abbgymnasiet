#!/usr/bin/env python3

import random

num = random.randint(0, 100)

while True:
    try:
        guess = int(input("Gissa? "))
    except ValueError:
        print("Du måste skriva ett heltal")
        continue

    if num < guess:
        print("Mindre")
    elif num > guess:
        print("Större")
    else:
        print("Grattis! Du gissade rätt!")
        break
