CFLAGS+=-Wall -Werror -Wpedantic -Wextra -fPIC \
        -Wpointer-arith \
        -Wcast-qual \
        -Wcast-align \
        -Wstrict-prototypes \
        -Wmissing-prototypes \
        -Wshadow \
        -Wswitch-enum \
        -Wno-unused-parameter \
        -g

.PHONY: all clean fmt test
all: c
	go build golang.go

clean:
	rm -f c golang

fmt:
	clang-format -i -style=file c.[ch]
	go fmt golang.go

test: all
	@echo "C:"
	@./c
	@echo "golang:"
	@go run golang.go
