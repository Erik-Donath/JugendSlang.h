/* 10_Zahlenraten.cCLEA*/
#include "../Jugendslang.h"

Cousin Los_gehts(Nix) {
    Zufall_Saat((Ehrenmann)Zeit_jetzt(Null_Bock));
    Cousin Geheim = Zufall() % 100 + 1;
    Cousin Tipp = 0, Versuche = 0;

    Rufen("Ich denk mir eine Zahl von 1 bis 100. Pack aus, Digga!");

    Mach_mal {
        Labern("Dein Tipp: ");
        Safe_wenn (Zuhoeren("%d", &Tipp) != 1) {
            Rufen("Das war keine Zahl, ich bin raus.");
            Ich_bin_raus Alles_Cringe;
        }
        Versuche++;

        Safe_wenn (Tipp < Geheim)      Rufen("Zu klein, Bro.");
        Sonst_Safe_wenn (Tipp > Geheim) Rufen("Zu gross, Bro.");
    } Solange_Bruder (Tipp != Geheim);

    Labern("Safe, %d ist richtig! Du hast %d Versuche gebraucht.\n", Geheim, Versuche);
    Ich_bin_raus Alles_Fresh;
}
