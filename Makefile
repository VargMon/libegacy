CPPFLAGS = -Iinclude

OBJ = base64.o fts.o glob.o readpassphrase.o

all: libegacy.a

libegacy.a: $(OBJ)
	$(AR) crs $@ $^

clean:
	rm -f libegacy.a $(OBJ)
