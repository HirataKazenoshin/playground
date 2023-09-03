package main

import "fmt"

func main() {
	var a, b, c int
	fmt.Scan(&a, &b, &c)

	a += b + c

	fmt.Printf("%v %v\n", a/2, a%2)
}
