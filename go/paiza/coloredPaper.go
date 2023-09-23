package main

import "fmt"

func main() {
	var a, b string
	fmt.Scan(&a)
	fmt.Scan(&b)
	if len(a) > len(b) {
		fmt.Println(b)
	} else {
		fmt.Println(a)
	}
}
