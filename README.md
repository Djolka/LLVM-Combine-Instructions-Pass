# LLVM Combine Instructions Pass

Project in the course <i>Construction of Compilers</i> at the Faculty of Mathematics

Implemented steps of the Combine Instructions LLVM Pass:
1. If the binary operator has a constant operand, it is shifted to the right side of the operator. The following binary operators are handled:
    1) Addition
    2) Multiplication
    3) Comparisons (<, <=, >, >=, ==, !=)
2. Instruction <i>add X, X</i> changes to instruction <i>shift X << 1</i>
3. The multiple exponentiation by 2 instruction is replaced by the shift instruction (eg $X^4$ -> X << 2)




<!--
Projekat na predmetu Konstrukcija kompilatora na Matematičkom fakultetu

LLVM Pass radi kombinaciju instrukcija na sledeći način:

1. Ukoliko binarni operator ima konstantan operand, on se pomera na desnu stranu. Obrađeni su sledeći binarni operatori:  
    1) sabiranje
    2) množenje
    3) poređenja (<, <=, >, >=, ==, !=)
2. Instrukcija add X, X se menja instrukcijom shift X << 1 
3. Instrukcija višestrukog stepenovanja brojem 2 se menja shitf instrukcijom (npr. X^4 -> X << 2)
-->

## Authors:

- Đorđe Milošević 221/2019
- Tamara Tomić 122/2017
