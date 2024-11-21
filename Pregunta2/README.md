X = 0, Y = 5, Z = 6

• L1 = min(0, 9) = 0

• L2 = min(0, 3) = 0

• L3 = min(9, 3) = 3

• U1 = max(0, 9) + 1 = 10

• U2 = max(0, 3) + 1 = 4

• U3 = max(9, 3) + 1 = 10

• I = 5

• J = 2

• K = 6


Considere también la siguiente declaración

M : array [L1..U1] of array [L2..U2] of array [L3..U3] of T

Suponiendo que M inicia en la dirección cero (0) y que el tamaño del tipo T es cuatro (4),
se desea que calcule:
(a) La dirección de M[I][J][K] si las matrices se guardan en row–major.
(b) La dirección de M[I][J][K] si las matrices se guardan en column–major.

## Row–major