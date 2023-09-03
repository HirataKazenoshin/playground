package main

import "fmt"

func main() {
	var a, b int
	fmt.Scan(&a, &b)

	a += b

	fmt.Printf("%v %v\n", a/2, a%2)
}
