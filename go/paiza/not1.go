package main

import (
	"fmt"
)

func main() {
	var x int
	fmt.Scan(&x)
	x++
	if x == 1 {
		fmt.Print(x)
	} else {
		fmt.Print(0)
	}
}
