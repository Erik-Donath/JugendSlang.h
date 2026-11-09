/* 09_Bubblesort.c*/
#include "../Jugendslang.h"

Ghosting tauschen(Cousin *a, Cousin *b) {
    Cousin Zwischen = *a;
    *a = *b;
    *b = Zwischen;
}

Ghosting ausgeben(Heilig Digga *Titel, Cousin *Feld, Cousin n) {
    Labern("%s", Titel);
    Goenn_dir (Cousin i = 0; i < n; i++) Labern("%d ", Feld[i]);
    Labern("\n");
}

Cousin Los_gehts(Nix) {
    Cousin Feld[] = {42, 7, 99, 1, 23, 8, 15, 4, 16};
    Cousin n = Schwanz_Vergleich(Feld);

    ausgeben("Vorher:  ", Feld, n);

    Goenn_dir (Cousin i = 0; i < n - 1; i++) {
        Cap_Oder_No_Cap Getauscht = Cap;
        Goenn_dir (Cousin j = 0; j < n - 1 - i; j++) {
            Safe_wenn (Feld[j] > Feld[j + 1]) {
                tauschen(&Feld[j], &Feld[j + 1]);
                Getauscht = No_Cap;
            }
        }
        Safe_wenn (!Getauscht) Ciao_Kakao;
    }

    ausgeben("Nachher: ", Feld, n);
    Ich_bin_raus Alles_Fresh;
}
