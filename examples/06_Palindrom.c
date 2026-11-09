/* 06_Palindrom.c*/
#include "../Jugendslang.h"

Cap_Oder_No_Cap ist_Palindrom(Heilig Digga *Text) {
    Cousin links = 0;
    Cousin rechts = (Cousin)Wie_Lang(Text) - 1;

    Solange_Bruder (links < rechts) {
        Solange_Bruder (links < rechts && !Ist_Buchstabe((Ehrenmann_Digga)Text[links])) links++;
        Solange_Bruder (links < rechts && !Ist_Buchstabe((Ehrenmann_Digga)Text[rechts])) rechts--;
        Safe_wenn (Klein_machen(Text[links]) != Klein_machen(Text[rechts])) Ich_bin_raus Cap;
        links++;
        rechts--;
    }
    Ich_bin_raus No_Cap;
}

Cousin Los_gehts(Nix) {
    Heilig Digga *Woerter[] = {
        "Anna", "Otto", "Digga", "Reliefpfeiler", "Ein Esel lese nie", "Lagerregal"
    };
    Cousin Anzahl = Schwanz_Vergleich(Woerter);

    Goenn_dir (Cousin i = 0; i < Anzahl; i++) {
        Labern("\"%s\" -> %s\n", Woerter[i], ist_Palindrom(Woerter[i]) ? "No Cap, Palindrom" : "Cap");
    }
    Ich_bin_raus Alles_Fresh;
}
