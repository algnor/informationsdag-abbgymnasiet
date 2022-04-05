#!/usr/bin/env python3

# Ber om input från användaren och lagrar resultatet i "namn"
namn = input("Vad heter du? ")

# Jämför "namn" med olika namn för att de olika resultat
if namn == "Kalle Kula":
    print("Tja, Kalle!")
elif namn == "Pelle Kula":
    print("Tjena, Pelle!")
else:
    print("Hej, " + namn + "!")
