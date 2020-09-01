// golang cheat source (single line comment)

// package definition, main is special
package main

/*
multi-line comment
*/

// import statements
import (
	"fmt"
	"os"
)

// hello takes a single name argument and returns a string and a possible error
// value.
func hello(name string) (string, error) {
	return fmt.Sprintf("hello, %s", name), nil
}

// types shows the main types in Go.
func types() string {
	var i int   // define signed integer variable i of machine word size
	var ui uint // in unsigned
	// alternative variable definition syntax with explicit word sizes
	var (
		i8   int8
		i16  int16
		i32  int32
		i64  int64
		ui8  uint8
		ui16 uint16
		ui32 uint32
		ui64 uint64
	)
	// floats
	var (
		f32 float32
		f64 float64
	)
	var b byte // alias for uint8
	var r rune // alias for int32, represents a Unicode code point

	i++  // increment
	ui-- // decrement
	// Go needs explicit casts
	i8 += int8(ui8)
	i16 += int16(ui16)
	i32 += int32(ui32)
	i64 += int64(ui64)
	f64 += float64(f32)
	// assignments
	b = '?'
	r = '😷'
	return string(r) + string(b)
}

func fatal(err error) {
	fmt.Fprintf(os.Stderr, "%s: error: %s\n", os.Args[0], err)
	os.Exit(1)
}

func main() {
	s, err := hello("world") // definition of two variables via ':='
	if err != nil {          // typical error check
		fatal(err)
	}
	fmt.Println(s)
	fmt.Println(types())
}
