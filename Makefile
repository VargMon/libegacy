CPPFLAGS = -Iinclude

OBJ = fts.o glob.o readpassphrase.o

all: libegacy.a

libegacy.a: $(OBJ)
	$(AR) crs $@ $^

clean:
	rm -f foo.a $(OBJ)
