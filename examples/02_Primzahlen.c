/* 02_Primzahlen.c*/
#include "../Jugendslang.h"

#define LIMIT 100

Cousin Los_gehts(Nix) {
    Cap_Oder_No_Cap Prim[LIMIT + 1];
    Speicher_fuellen(Prim, 1, Wie_Fett(Prim));
    Prim[0] = Cap;
    Prim[1] = Cap;

    Goenn_dir (Cousin i = 2; i * i <= LIMIT; i++) {
        Safe_wenn (Prim[i]) {
            Goenn_dir (Cousin j = i * i; j <= LIMIT; j += i) {
                Prim[j] = Cap;
            }
        }
    }

    Rufen("Primzahlen bis 100, Digga:");
    Goenn_dir (Cousin i = 2; i <= LIMIT; i++) {
        Safe_wenn (Prim[i]) Labern("%d ", i);
    }
    Labern("\n");
    Ich_bin_raus Alles_Fresh;
}
