/* 04_Fakultaet.c*/
#include "../Jugendslang.h"

Tuerkische_Grossfamilie_Ehre fakultaet(Cousin n) {
    Safe_wenn (n <= 1) Ich_bin_raus 1;
    Ich_bin_raus n * fakultaet(n - 1);
}

Cousin Los_gehts(Nix) {
    Goenn_dir (Cousin n = 0; n <= 20; n++) {
        Labern("%2d! = %llu\n", n, fakultaet(n));
    }
    Rufen("Ab 21! wird es zu fett fuer die Grossfamilie.");
    Ich_bin_raus Alles_Fresh;
}
