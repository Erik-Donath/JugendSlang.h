# Jugendslang.h

[Deutsch](README.md) | [English](README.en.md) | **Jugendsprache**

> C, aber auf Jugendslang. Ein einziger Header (Jugendslang.h), der alle C-Keywords durch deutsche Jugendsprache ersetzt. Inspiriert von german.h, nur mit mehr Swag.

Beispiel:
```c
#include "Jugendslang.h"

Cousin Los_gehts(Nix) {
    Cousin Alter = 18;
    Safe_wenn (Alter >= 18) {
        Labern("Safe, du bist drin!\n");
    } Sonst_Lan {
        Labern("Zu jung, Bro.\n");
    }
    Ich_bin_raus Alles_Fresh;
}
```

## Installation

Gibt nix zu installieren, Digga. Kopier einfach `Jugendslang.h` in dein Projekt und bind sie so ein:

```c
#include "Jugendslang.h"
```

```bash
git clone https://github.com/Erik-Donath/JugendSlang.h.git
```

Kompilieren geht mit jedem normalen C-Compiler, zum Beispiel:

```bash
gcc beispiel.c -o beispiel -I. -lm
```

`-lm` brauchst du nur, wenn du Mathe-Sachen wie `Wurzel` oder `Hoch` benutzt.

## Wichtig, bevor du loslegst

- Bind andere Header **vor** `Jugendslang.h` ein, sonst gibt's Drama. Die gängigen Standard-Header bringt `Jugendslang.h` schon selbst mit.
- Die Slang-Wörter sind reserviert. Du kannst keine Variable `Gang`, `Vibe` oder `Hater` nennen, weil die zu `struct`, `case` bzw. `signed` werden. Cringe, aber so ist es.
- Sachen wie `#include`, `#define` und `#ifdef` kann man nicht per Makro umbenennen. Die bleiben auf Englisch, sorry, Bro.
- Typen mit mehreren Wörtern wie `long long int` schreibst du mit Unterstrichen, zum Beispiel `Tuerkische_Grossfamilie`.

## Wörterbuch

### Datentypen

| Slang | C |
|---|---|
| `Cousin` | `int` |
| `Digga` | `char` |
| `Cousinchen` | `short` |
| `Onkel` | `long` |
| `Grossfamilie` | `long long` |
| `Tuerkische_Grossfamilie` | `long long int` |
| `Tuerkische_Grossfamilie_Ehre` | `unsigned long long int` |
| `Swaggy` | `float` |
| `Doppel_Swag` | `double` |
| `Mega_Swag` | `long double` |
| `Ghosting` / `Nix` | `void` |
| `Ehrenmann` | `unsigned` |
| `Hater` | `signed` |
| `Cap_Oder_No_Cap` | `_Bool` |
| `Cap` / `No_Cap` | `0` / `1` (false / true) |
| `Kompliziert` | `_Complex` |
| `Im_Kopf` | `_Imaginary` |

### Kontrollfluss

| Jugendsprache | C |
|---|---|
| `Safe_wenn` | `if` |
| `Sonst_Lan` | `else` |
| `Sonst_Safe_wenn` | `else if` |
| `Goenn_dir` | `for` |
| `Solange_Bruder` | `while` |
| `Mach_mal` | `do` |
| `Vibecheck` | `switch` |
| `Vibe` | `case` |
| `Whatever` | `default` |
| `Ciao_Kakao` | `break` |
| `Weiter_gehts` | `continue` |
| `Ich_bin_raus` | `return` |
| `Ab_dafuer` | `goto` |

### Strukturen und Typen-Zeug

| Jugendsprache | C |
|---|---|
| `Gang` | `struct` |
| `Squad` | `union` |
| `Tierlist` | `enum` |
| `Nickname` | `typedef` |
| `Wie_Fett` | `sizeof` |

### Speicherklassen und Qualifier

| Jugendsprache | C |
|---|---|
| `Einfach_so` | `auto` |
| `Immer_da` | `static` |
| `Fremdgehen` | `extern` |
| `VIP` | `register` |
| `Heilig` | `const` |
| `Drama` | `volatile` |
| `Zack_Zack` | `inline` |
| `Exklusiv` | `restrict` |
| `Mein_Ding` | `_Thread_local` |
| `Atombombe` | `_Atomic` |
| `Kein_Comeback` | `_Noreturn` |
| `Irgendwas` | `_Generic` |
| `Ehrenwort` | `_Static_assert` |
| `Ausrichten` / `Wie_ausgerichtet` | `_Alignas` / `_Alignof` |

### Standardbibliothek

| Jugendsprache | C |
|---|---|
| `Los_gehts` | `main` |
| `Alles_Fresh` / `Alles_Cringe` | `EXIT_SUCCESS` / `EXIT_FAILURE` |
| `Null_Bock` | `NULL` |
| `Labern` / `Zuhoeren` / `Rufen` | `printf` / `scanf` / `puts` |
| `Abziehen` / `Freilassen` | `malloc` / `free` |
| `Wurzel` / `Hoch` | `sqrt` / `pow` |
| `Zufall` / `Zufall_Saat` / `Zeit_jetzt` | `rand` / `srand` / `time` |
| `Abhauen` | `exit` |

Die komplette Liste steht in der Datei `Jugendslang.h`.

## Beispiele

| Datei | Worum geht's |
|---|---|
| `01_Schaltjahr.c` | Ist das ein Schaltjahr? Ja oder Cap? |
| `02_Primzahlen.c` | Primzahlen finden mit dem Sieb des Eratosthenes |
| `03_Fibonacci.c` | Fibonacci mit der `Tuerkische_Grossfamilie` |
| `04_Fakultaet.c` | Fakultät bis 20! |
| `05_Taschenrechner.c` | Taschenrechner mit `Vibecheck` |
| `06_Palindrom.c` | Palindrome erkennen |
| `07_Gang.c` | `Gang`, `Tierlist`, `Squad` und `Nickname` |
| `08_Collatz.c` | Collatz-Folge |
| `09_Bubblesort.c` | Bubblesort mit Zeigern |
| `10_Zahlenraten.c` | Zahlenraten, rate die Zahl von 1 bis 100 |

## Mitmachen

Dir fehlt ein Begriff oder du hast einen besseren Slang-Ausdruck? Mach einen Pull Request! Dabei bitte drei Regeln beachten:

- Nur ASCII in Makronamen (`ae`, `oe`, `ue`, `ss` statt Umlauten und ß).
- Mehrere Wörter mit Unterstrichen verbinden.
- Keinen Namen nehmen, der schon ein C-Keyword oder eine Standardfunktion ist.

## Disclaimer

Ist ein Spaßprojekt. Benutz es nicht in Produktionscode, außer dein Team hat dafür wirklich Nerven. Keine Garantie für gar nichts.

## Lizenz

MIT, siehe Datei `LICENSE`.