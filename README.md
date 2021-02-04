# L33Tspeak-Translator

L33tspeak - the act of speaking like a computer hacker (or hax0r) - was popularised in the late 90s as a mechanism of abusing ASCII art and character mappings to confuse outsiders

In L33Tspeak you substitute letters for their rough outlines in ASCII characters, e.g. symbols or numbers. You can have 1:1 mappings (`E -> 3`) or 1:many mappings (`W -> \//`) 

### So then you wind up with words like this:
```
BASIC => 645|C
ELEET => 31337
WOW => \//0\//
MOM => (V)0(V)
```

### The input mappings are as follows:
```
A -> 4
B -> 6
E -> 3
I -> |
L -> 1
M -> (V)
N -> (\)
O -> 0
S -> 5
T -> 7
V -> \/
W -> \//
```

Your challenge is to take an input and if it is L33Tspeak convert it to ASCII, if it is ASCII convert it to L33Tspeak.

### A few examples:
```
hello world -> h3110 \//0r1d
the programmers hangout -> 7h3 pr0gr4(V)(V)3r5 h4(\)g0u7
never gonna give you up -> (\)3\/3r g0(\)(\)4 g|\/3 y0u up
D4 p4|(\) -> Da pain
puppy -> puppy
MAN -> (V)4(\)
```

* *Notes:
Input from english to leetcode will only be letters e.g. [a-zA-Z] case does not matter and does not have to be retained*
