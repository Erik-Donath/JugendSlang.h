/* 08_Collatz.c*/
#include "../Jugendslang.h"

Cousin Los_gehts(Nix) {
    Cousin Beste_Zahl = 1, Beste_Schritte = 0;

    Goenn_dir (Cousin start = 1; start < 10000; start++) {
        Tuerkische_Grossfamilie n = start;
        Cousin Schritte = 0;
        Solange_Bruder (n != 1) {
            Safe_wenn (n % 2 == 0) n /= 2;
            Sonst_Lan              n = 3 * n + 1;
            Schritte++;
        }
        Safe_wenn (Schritte > Beste_Schritte) {
            Beste_Schritte = Schritte;
            Beste_Zahl = start;
        }
    }
    Labern("Unter 10000 ist %d der Boss: %d Schritte bis zur 1.\n", Beste_Zahl, Beste_Schritte);
    Ich_bin_raus Alles_Fresh;
}
