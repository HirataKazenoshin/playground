package main

import "fmt"

func main() {
	var N int
	fmt.Scan(&N)
	var cnt int = 1
	for cnt <= N {
		fmt.Println(cnt)
		cnt++
	}
}
