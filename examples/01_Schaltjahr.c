/* 01_Schaltjahr.c*/
#include "../Jugendslang.h"

Cap_Oder_No_Cap ist_Schaltjahr(Cousin Jahr) {
    Safe_wenn (Jahr % 400 == 0) Ich_bin_raus No_Cap;
    Safe_wenn (Jahr % 100 == 0) Ich_bin_raus Cap;
    Ich_bin_raus (Jahr % 4 == 0);
}

Cousin Los_gehts(Nix) {
    Cousin Jahre[] = {1900, 2000, 2023, 2024, 2026, 2100};
    Cousin Anzahl = Schwanz_Vergleich(Jahre);

    Goenn_dir (Cousin i = 0; i < Anzahl; i++) {
        Safe_wenn (ist_Schaltjahr(Jahre[i])) {
            Labern("%d ist ein Schaltjahr, no cap!\n", Jahre[i]);
        } Sonst_Lan {
            Labern("%d ist kein Schaltjahr, das ist Cap.\n", Jahre[i]);
        }
    }
    Ich_bin_raus Alles_Fresh;
}
