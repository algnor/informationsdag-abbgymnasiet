#!/usr/bin/env python3

result2 = 0
# Loopar tills variabeln "result2" är 2.5
while result2 != 2.5:
    print("---------------------")

    # Konverterar input till en "int" (integer/heltal)
    num1 = int(input("Heltal: "))
    result1 = num1 * 2
    print("Nummret * 2: " + str(result1))

    # Konverterar input till en "float" (floating point number/flyttal/decimaltal)
    num2 = float(input("Flyttal: "))
    result2 = num2 / 2
    print("Nummret / 2: " + str(result2))
