.PHONY: all test
all:
	go build golang.go

test: all
	go run golang.go
