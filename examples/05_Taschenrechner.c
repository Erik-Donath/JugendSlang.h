/* 05_Taschenrechner.c*/
#include "../Jugendslang.h"

Swaggy rechnen(Swaggy x, Digga Op, Swaggy y, Cap_Oder_No_Cap *Fehler) {
    *Fehler = Cap;
    Vibecheck (Op) {
        Vibe '+': Ich_bin_raus x + y;
        Vibe '-': Ich_bin_raus x - y;
        Vibe '*': Ich_bin_raus x * y;
        Vibe '/':
            Safe_wenn (y == 0) {
                *Fehler = No_Cap;
                Ich_bin_raus 0;
            }
            Ich_bin_raus x / y;
        Whatever:
            *Fehler = No_Cap;
            Ich_bin_raus 0;
    }
}

Cousin Los_gehts(Nix) {
    Swaggy Zahl1[] = {12, 7.5f, 9, 5, 3};
    Digga  Ops[]   = {'+', '*', '/', '/', '^'};
    Swaggy Zahl2[] = {30, 4, 3, 0, 2};

    Goenn_dir (Cousin i = 0; i < 5; i++) {
        Cap_Oder_No_Cap Fehler;
        Swaggy Ergebnis = rechnen(Zahl1[i], Ops[i], Zahl2[i], &Fehler);
        Safe_wenn (Fehler) {
            Labern("%.1f %c %.1f -> Cringe, geht nicht!\n", Zahl1[i], Ops[i], Zahl2[i]);
        } Sonst_Lan {
            Labern("%.1f %c %.1f = %.2f\n", Zahl1[i], Ops[i], Zahl2[i], Ergebnis);
        }
    }
    Ich_bin_raus Alles_Fresh;
}
