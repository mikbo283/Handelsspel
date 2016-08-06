src = $(wildcard *.cc)
obj = $(src:.c=.o)

CC:= g++
LDFLAGS = -Wall -std=c++11 -w

MerchantAdventures: $(obj)
	$(CC) -o $@ $^ $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(obj) myprog
