package main

import "fmt"

func main() {
	var n [2]int
	for i := 0; i < 2; i++ {
		fmt.Scan(&n[i])
	}

	fmt.Println(n[0]*2 + n[1]*2)
}
