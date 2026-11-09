#ifndef JUGENDSLANG_H
#define JUGENDSLANG_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdint.h>
#include <limits.h>
#include <math.h>
#include <ctype.h>
#include <time.h>

#define Cousin                          int
#define Digga                           char
#define Cousinchen                      short
#define Onkel                           long
#define Grossfamilie                    long long
#define Tuerkische_Grossfamilie         long long int      /* long long int */
#define Tuerkische_Grossfamilie_Ehre    unsigned long long int
#define Swaggy                          float
#define Doppel_Swag                     double
#define Mega_Swag                       long double
#define Ghosting                        void
#define Ehrenmann                       unsigned           /* immer positiv */
#define Hater                           signed             /* darf negativ sein */

#define Ehrenmann_Cousin                unsigned int
#define Ehrenmann_Digga                 unsigned char
#define Ehrenmann_Cousinchen            unsigned short
#define Ehrenmann_Onkel                 unsigned long
#define Onkel_Cousin                    long int
#define Cousinchen_Cousin               short int

/* Bool: Cap = false, No_Cap = true */
#define Cap_Oder_No_Cap                 _Bool
#define Cap                             0
#define No_Cap                          1

/* C99/C11-Spezialtypen */
#define Kompliziert                     _Complex           /* "Its complicated" */
#define Im_Kopf                         _Imaginary         /* nur in der Fantasie */

#define Safe_wenn                       if
#define Sonst_Lan                       else
#define Sonst_Safe_wenn                 else if            /* geht als ein Wort */
#define Goenn_dir                       for
#define Solange_Bruder                  while
#define Mach_mal                        do
#define Vibecheck                       switch
#define Vibe                            case
#define Whatever                        default
#define Ciao_Kakao                      break
#define Weiter_gehts                    continue
#define Ich_bin_raus                    return
#define Ab_dafuer                       goto

#define Gang                            struct
#define Squad                           union
#define Tierlist                        enum
#define Nickname                        typedef
#define Wie_Fett                        sizeof

#define Einfach_so                      auto
#define Immer_da                        static
#define Fremdgehen                      extern
#define VIP                             register
#define Heilig                          const              /* aendert sich nicht */
#define Drama                           volatile           /* kann sich jederzeit aendern */
#define Zack_Zack                       inline
#define Exklusiv                        restrict
#define Mein_Ding                       _Thread_local
#define Atombombe                       _Atomic
#define Kein_Comeback                   _Noreturn


// C11 / C23 EXTRAS
#define Irgendwas                       _Generic
#define Ehrenwort                       _Static_assert
#define Ausrichten                      _Alignas
#define Wie_ausgerichtet                _Alignof

// BONUS: HAEUFIG GENUTZTE STANDARDDINGE
#define Los_gehts                       main
#define Nix                             void
#define Alles_Fresh                     EXIT_SUCCESS
#define Alles_Cringe                    EXIT_FAILURE
#define Null_Bock                       NULL

#define Labern                          printf
#define Zuhoeren                        scanf
#define Rufen                           puts
#define Abziehen                        malloc
#define Freilassen                      free
#define Kopieren                        memcpy
#define Wie_Lang                        strlen
#define Zusammenkleben                  strcat
#define Vergleichen                     strcmp

#define Groesse_T                       size_t
#define Zeit_T                          time_t
#define Datei                           FILE
#define Cousin_8                        int8_t
#define Cousin_16                       int16_t
#define Cousin_32                       int32_t
#define Cousin_64                       int64_t
#define Ehrenmann_Cousin_8              uint8_t
#define Ehrenmann_Cousin_16             uint16_t
#define Ehrenmann_Cousin_32             uint32_t
#define Ehrenmann_Cousin_64             uint64_t

#define Mega_Cousin                     INT_MAX
#define Mini_Cousin                     INT_MIN
#define Mega_Familie                    LLONG_MAX
#define Tastatur                        stdin
#define Bildschirm                      stdout
#define Fehlerkanal                     stderr
#define Kreis_Zahl                      3.14159265358979323846

#define Zeile_Einlesen                  fgets
#define Zeichen_rein                    getchar
#define Zeichen_raus                    putchar
#define In_Datei_labern                 fprintf
#define Datei_auf                       fopen
#define Datei_zu                        fclose
#define In_Text_labern                  sprintf
#define Sicher_in_Text_labern           snprintf

#define Abziehen_Nullen                 calloc
#define Nachziehen                      realloc
#define Abhauen                         exit
#define Text_kopieren                   strcpy
#define Text_suchen                     strstr
#define Text_zu_Cousin                  atoi
#define Text_zu_Swag                    atof
#define Speicher_fuellen                memset

#define Wurzel                          sqrt
#define Hoch                            pow
#define Betrag                          abs
#define Betrag_Swag                     fabs
#define Abrunden                        floor
#define Aufrunden                       ceil
#define Rest_Swag                       fmod
#define Sinus                           sin
#define Kosinus                         cos
#define Zufall                          rand
#define Zufall_Saat                     srand
#define Zeit_jetzt                      time

#define Ist_Buchstabe                   isalpha
#define Ist_Zahl                        isdigit
#define Ist_Leer                        isspace
#define Gross_machen                    toupper
#define Klein_machen                    tolower

#endif /* JUGENDSLANG_H */