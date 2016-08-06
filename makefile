#########################
# customise these
CFILES := main.cc ship.cc item.cc nation.cc harbour.cc person.cc
PROG := prog
CFLAGS := -std=c++14 -Wall -Wextra -g
LDFLAGS :=
########################

# -MMD generates dependencies while compiling
CFLAGS += -MMD
CC := g++

OBJFILES := $(CFILES:.cc=.o)
DEPFILES := $(CFILES:.cc=.d)

$(PROG) : $(OBJFILES)
	$(LINK.o) $(LDFLAGS) -o $@ $^

clean :
	rm -f $(PROG) $(OBJFILES) $(DEPFILES)

-include $(DEPFILES)
