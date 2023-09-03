package main

import "fmt"

func main() {
	var a, b int
	fmt.Scan(&a, &b)

	if a == b && a == 1 {
		fmt.Println(0)
	} else {
		fmt.Println(1)
	}
}
