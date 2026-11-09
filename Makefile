# Nutzung:
#   make                      alle Beispiele bauen
#   make run                  alle Beispiele ausfuehren (ohne interaktive)
#   make run-01_Schaltjahr    ein einzelnes Beispiel bauen und ausfuehren
#   make clean                Build-Verzeichnis loeschen
#   make help                 diese Hilfe anzeigen

CC      ?= gcc
CFLAGS  ?= -std=c11 -Wall -Wextra -pedantic -O2
LDLIBS  ?= -lm

HEADER  := Jugendslang.h
SRCDIR  := examples
BUILD   := build

SRC     := $(sort $(wildcard $(SRCDIR)/*.c))
NAMES   := $(patsubst $(SRCDIR)/%.c,%,$(SRC))
BIN     := $(addprefix $(BUILD)/,$(NAMES))

# Beispiele, die Eingaben brauchen und bei "make run" uebersprungen werden
INTERACTIVE := 10_Zahlenraten
RUNNABLE    := $(filter-out $(INTERACTIVE),$(NAMES))

.PHONY: all run clean help

.SECONDARY:

all: $(BIN)

$(BUILD):
	mkdir -p $(BUILD)

$(BUILD)/%: $(SRCDIR)/%.c $(HEADER) | $(BUILD)
	$(CC) $(CFLAGS) $< -o $@ $(LDLIBS)

run: $(addprefix run-,$(RUNNABLE))

run-%: $(BUILD)/%
	@echo "=== $* ==="
	@./$(BUILD)/$*
	@echo

clean:
	rm -rf $(BUILD)

help:
	@sed -n '3,8p' Makefile | sed 's/^# \{0,1\}//'