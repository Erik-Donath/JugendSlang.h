/* 07_Gang.c*/
#include "../Jugendslang.h"

Tierlist Rang { Noob, Normalo, Pro, Legende };

Nickname Gang Mitglied {
    Digga Name[20];
    Cousin Alter;
    Tierlist Rang Stufe;
} Mitglied;

Squad Wert {
    Cousin  als_Cousin;
    Swaggy  als_Swag;
};

Heilig Digga *rang_text(Tierlist Rang r) {
    Vibecheck (r) {
        Vibe Noob:    Ich_bin_raus "Noob";
        Vibe Normalo: Ich_bin_raus "Normalo";
        Vibe Pro:     Ich_bin_raus "Pro";
        Vibe Legende: Ich_bin_raus "Legende";
        Whatever:     Ich_bin_raus "???";
    }
}

Cousin Los_gehts(Nix) {
    Mitglied Crew[] = {
        {"Kevin",   15, Noob},
        {"Chantal", 17, Pro},
        {"Mehmet",  19, Legende},
        {"Jonas",   16, Normalo},
    };
    Cousin Anzahl = Schwanz_Vergleich(Crew);

    Rufen("=== Die Gang ===");
    Goenn_dir (Cousin i = 0; i < Anzahl; i++) {
        Labern("%-8s Alter %d  Rang: %s\n", Crew[i].Name, Crew[i].Alter, rang_text(Crew[i].Stufe));
    }

    Squad Wert w;
    w.als_Swag = 1.0f;
    Labern("\nUnion: gleicher Speicher, Cousin = %d, Platz = %zu Byte\n",
           w.als_Cousin, Wie_Fett(w));
    Ich_bin_raus Alles_Fresh;
}
