
zebra: zebra.c
	$(CC) $< -o $@

clean: fake
	rm -f zebra

install: zebra
	mkdir -p $(PREFIX)/bin
	cp zebra $(PREFIX)/bin

.PHONY: fake
