# JugendSlang.h

**Deutsch** | [English](README.en.md) | [Jugendsprache](README.jugend.md)

> C, aber auf Jugendslang. Ein einziger Header (Jugendslang.h), der alle C-Keywords durch deutsche Jugendsprache ersetzt. Inspiriert von german.h, nur mit mehr Swag.

Beispiel:
```c
#include "../Jugendslang.h"

Cousin Los_gehts(Nix) {
    Cousin Alter = 18;
    Safe_wenn (Alter >= 18) {
        Labern("Zugriff gewaehrt.\n");
    } Sonst_Lan {
        Labern("Zugriff verweigert.\n");
    }
    Ich_bin_raus Alles_Fresh;
}
```

## Installation

Es ist keine Installation erforderlich. Kopieren Sie die Datei `Jugendslang.h` in Ihr Projekt und binden Sie sie wie folgt ein:

```c
#include "../Jugendslang.h"
```

```bash
git clone https://github.com/Erik-Donath/JugendSlang.h.git
```

Die Übersetzung erfolgt mit jedem gängigen C-Compiler, beispielsweise:

```bash
gcc beispiel.c -o beispiel -I. -lm
```

Die Option `-lm` ist nur erforderlich, wenn Sie Mathematikfunktionen wie `Wurzel` oder `Hoch` verwenden.

## Hinweise zur Verwendung

- Binden Sie weitere Header **vor** `Jugendslang.h` ein. Andernfalls können die Makros deren Deklarationen beeinträchtigen. Die gängigen Standard-Header werden von `Jugendslang.h` selbst eingebunden.
- Die definierten Makronamen sind reserviert. Sie können beispielsweise keine Variable `Gang`, `Vibe` oder `Hater` nennen, da diese durch `struct`, `case` bzw. `signed` ersetzt würde.
- Präprozessor-Direktiven (`#include`, `#define`, `#ifdef` usw.) lassen sich nicht durch Makros umbenennen und bleiben unverändert.
- Mehrteilige Typen wie `long long int` werden mit Unterstrichen notiert, etwa `Tuerkische_Grossfamilie`.

## Wörterbuch

### Datentypen

| Jugendsprache | C |
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

### Strukturen und Typsystem

| Jugendsprache | C |
|---|---|
| `Gang` | `struct` |
| `Squad` | `union` |
| `Tierlist` | `enum` |
| `Nickname` | `typedef` |
| `Wie_Fett` | `sizeof` |

### Speicherklassen und Qualifizierer

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

Die vollständige Liste finden Sie in der Datei `Jugendslang.h`.

## Beispiele

| Datei | Thema |
|---|---|
| `01_Schaltjahr.c` | Schaltjahrberechnung |
| `02_Primzahlen.c` | Sieb des Eratosthenes |
| `03_Fibonacci.c` | Fibonacci-Folge mit `Tuerkische_Grossfamilie` |
| `04_Fakultaet.c` | Fakultät bis 20! |
| `05_Taschenrechner.c` | Taschenrechner mit `Vibecheck` |
| `06_Palindrom.c` | Erkennung von Palindromen |
| `07_Gang.c` | `Gang`, `Tierlist`, `Squad` und `Nickname` |
| `08_Collatz.c` | Collatz-Folge |
| `09_Bubblesort.c` | Bubblesort mit Zeigern |
| `10_Zahlenraten.c` | Zahlenratespiel |

## Mitwirkung

Beiträge sind willkommen, sei es für fehlende Begriffe oder für treffendere Ausdrücke. Bitte beachten Sie dabei folgende Richtlinien:

- Makronamen bestehen ausschließlich aus ASCII-Zeichen (`ae`, `oe`, `ue`, `ss` statt Umlauten und ß).
- Mehrere Wörter werden mit Unterstrichen verbunden.
- Ein Makroname darf weder einem C-Schlüsselwort noch einer Funktion der Standardbibliothek entsprechen.

## Haftungsausschluss

Dieses Projekt ist humoristisch gemeint. Von einem Einsatz in produktivem Code wird abgeraten. Die Software wird ohne jegliche Gewährleistung bereitgestellt.

## Lizenz

Dieses Projekt steht unter der MIT-Lizenz. Details finden Sie in der Datei `LICENSE`.
