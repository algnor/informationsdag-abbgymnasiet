#!/usr/bin/env python3

while True:
    try:
        t1 = float(input("Tal 1: "))
        t2 = float(input("Tal 2: "))
    except ValueError:
        print("Inte ett giltigt tal")
        continue

    operator = input("Operator (+, -, *, / eller 'q' för att avsluta): ")
    if operator == "+":
        print(str(t1) + " + " + str(t2) + " = " + str(t1 + t2))

    elif operator == "-":
        print(str(t1) + " - " + str(t2) + " = " + str(t1 - t2))

    elif operator == "*":
        print(str(t1) + " * " + str(t2) + " = " + str(t1 * t2))

    elif operator == "/":
        print(str(t1) + " / " + str(t2) + " = " + str(t1 / t2))
    
    elif operator == "q":
        break

    else:
        print("Inte en giltig operator")
