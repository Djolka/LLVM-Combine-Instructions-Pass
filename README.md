# KK-projekat

Projekat na predmetu Konstrukcija kompilatora na Matematičkom fakultetu.

:computer:
Đorđe Milošević 221/2019
Tamara Tomić 122/2017

LLVM Pass radi kombinaciju instrukcija na sledeći način:

1. Ukoliko binarni operator ima konstantan operand, on se pomera na desnu stranu. Obrađeni su sledeći binarni operatori:  
  1) sabiranje
  2) množenje
  3) poređenja (<, <=, >, >=, ==, !=)
2. Instrukcija add X, X se menja instrukcijom X << 1 
3. Instrukcija višestrukog stepenovanja brojem 2 se menja shitf instrukcijom (npr. X^4 -> X << 2)
