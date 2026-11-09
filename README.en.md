# JugendSlang.h

[Deutsch](README.md) | **English** | [Jugendsprache](README.jugend.md)

> C, but in youth slang. A single header (Jugendslang.h) that replaces all C keywords with German youth slang. Inspired by german.h, just with more swag.

Example:
```c
#include "Jugendslang.h"

Cousin Los_gehts(Nix) {
    Cousin Alter = 18;
    Safe_wenn (Alter >= 18) {
        Labern("Access granted.\n");
    } Sonst_Lan {
        Labern("Access denied.\n");
    }
    Ich_bin_raus Alles_Fresh;
}
```

## Installation

No installation is required. Copy the file `Jugendslang.h` into your project and include it as follows:

```c
#include "Jugendslang.h"
```

```bash
git clone https://github.com/Erik-Donath/JugendSlang.h.git
```

Compile with any standard C compiler, for example:

```bash
gcc beispiel.c -o beispiel -I. -lm
```

The `-lm` option is only required if you use math functions such as `Wurzel` or `Hoch`.

## Usage Notes

- Include other headers **before** `Jugendslang.h`. Otherwise, the macros may interfere with their declarations. The common standard headers are already included by `Jugendslang.h` itself.
- The defined macro names are reserved. For example, you cannot name a variable `Gang`, `Vibe` or `Hater`, because it would be replaced by `struct`, `case` or `signed` respectively.
- Preprocessor directives (`#include`, `#define`, `#ifdef`, etc.) cannot be renamed via macros and remain unchanged.
- Multi-word types such as `long long int` are written with underscores, for example `Tuerkische_Grossfamilie`.

## Dictionary

### Data types

| Youth slang | C |
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

### Control flow

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

### Structures and type system

| Jugendsprache | C |
|---|---|
| `Gang` | `struct` |
| `Squad` | `union` |
| `Tierlist` | `enum` |
| `Nickname` | `typedef` |
| `Wie_Fett` | `sizeof` |

### Storage classes and qualifiers

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

### Standard library

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

The complete list can be found in the file `Jugendslang.h`.

## Examples

| File | Topic |
|---|---|
| `01_Schaltjahr.c` | Leap year calculation |
| `02_Primzahlen.c` | Sieve of Eratosthenes |
| `03_Fibonacci.c` | Fibonacci sequence using `Tuerkische_Grossfamilie` |
| `04_Fakultaet.c` | Factorials up to 20! |
| `05_Taschenrechner.c` | Calculator using `Vibecheck` |
| `06_Palindrom.c` | Palindrome detection |
| `07_Gang.c` | `Gang`, `Tierlist`, `Squad` and `Nickname` |
| `08_Collatz.c` | Collatz sequence |
| `09_Bubblesort.c` | Bubble sort with pointers |
| `10_Zahlenraten.c` | Number guessing game |

## Contributing

Contributions are welcome, whether for missing terms or for better expressions. Please observe the following guidelines:

- Macro names consist of ASCII characters only (`ae`, `oe`, `ue`, `ss` instead of umlauts and ß).
- Multiple words are joined with underscores.
- A macro name must not match a C keyword or a standard library function.

## Disclaimer

This project is meant humorously. Use in production code is not recommended. The software is provided without warranty of any kind.

## License

This project is licensed under the MIT License. See the `LICENSE` file for details.