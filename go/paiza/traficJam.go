package main

import "fmt"

func main() {
	var N, M int
	fmt.Scan(&N, &M)
	var sum int = 0
	for i := 0; i < N-1; i++ {
		var x int
		fmt.Scan(&x)
		if x <= M {
			sum += x
		}
	}
	fmt.Println(sum)
}
