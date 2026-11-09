# Program (Menu-Driven C Program)

This project is a single-file **menu-driven C application** (`largeprogram.c`) that demonstrates multiple small programming tasks. 
## How to compile

```bash
gcc largeprogram.c -o program
```

## How to run

```bash
./program
```

## Menu options

1. **Age Calculator**
   - Input: Birth year
   - Output: Age plus an estimate of months/days/hours/minutes/seconds using fixed constants.

2. **Currency and Notes**
   - Input: Total currency amount (integer)
   - Output: Number of notes for denominations (5000, 1000, 500, 100, 50, 20, 10, 5, 1).

3. **Expense Calculator (Hotel + Food)**
   - Input: Rent per night, number of nights, food bill, number of persons
   - Output: Total rent, total expenses, and per-head cost.

4. **Marksheet Program**
   - Input: Name, roll number, marks for subjects, total marks
   - Output: Obtained marks, percentage, and grade (A+ to fail).

5. **Storage Units Calculator** (Bits → Bytes/KB/MB/GB/TB)
   - Input: Bits (long)
   - Output: Converted sizes using /8 and /1024 steps.

6. **Reverse 3 Digits**
   - Input: A 3-digit number
   - Output: Reversed digits.

7. **Salary Calculator**
   - Input: Basic salary (float)
   - Output: Medical allowance, house rent, gross salary, tax, net salary.

8. **Positive / Negative / Zero Program**
   - Input: An integer
   - Output: Whether it is positive, negative, or 0.

9. **Bank Investment Calculator**
   - Input: Investment amount, filer type (`1` for filer, anything else treated as non-filer)
   - Output: Profit, WHT tax, and final balance.

10. **Vowel Program**
   - Input: A character
   - Output: Prints whether it is a vowel (A, E, I, O, U) or consonant.

11. **Online Shopping (Order + Delivery)**
   - Shows products and costs:
     - 1) Charging Fan (1250)
     - 2) Digital Magnifier (8000)
     - 3) Drone (9000)
     - 4) Smart Watch (15000)
   - Input: Product choice, quantity, delivery choice (`1` standard / `2` express)
   - Output: Item total, delivery charges, overall total.

12. **Calculator Program**
   - Input: Expression in the form `int op int` (e.g., `5 + 3`)
   - Output: Result for +, -, *, /, %.

13. **Vending Machine Program**
   - Input: Product choice (1–4), then money inserted
   - Products:
     - 1) Pepsi Can (120)
     - 2) Slice Juice (60)
     - 3) Lays (50)
     - 4) Dairy Milk (100)
   - Output: Dispensed message and change (if enough money).

14. **Wallet Program**
   - Input: Wallet amount, required amount, expense
   - Output: Displays totals and change if wallet covers the required amount.

15. **Unit Conversion**
   - Sub-menu:
     1) Feet ↔ Inches
     2) Kilo ↔ Gram (kilo to grams)
     3) Dollar Program (PKR to USD, using factor 278)
     4) Centigrade → Fahrenheit

16. **Digits to English Program** (for numbers 1–999)
   - Input: An integer up to 999
   - Output: English words for hundreds/tens/ones.
