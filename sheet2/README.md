# Sheet 2

## Number Theory
### Comparing different number systems

|binary|decimal|hexadecimal|
|-|-|-|
|0b00101010|42|0x2A|
|0b01111011|123|0x7B|
|0b01011010|90|0x5A|

### Two's Complement
Example value: `-90`
1) Get the absolute value in binary format
```
|-90| = 90 -> 0b01011010
```
2) Invert all bits
```
0b01011010 -> 0b10100101
```
3) Add one
```
0b10100101 + 0b00000001 -> 0b10100110
```
4) Check the result
```
0b10100110 + 0b01011010 = 0x00000000
```

### Calculating with binary and decimal numbers
**Decimal:**\
42 + 123 = 165

**Binary**:\
42 -> 0b00101010\
123 -> 0b01111011

0b00101010 + 0b01111011 = 0b10100101

0b10100101 -> 165 (unsigned) | -91 (signed)
