package main

import "fmt"

func main() {
	min := 24
	max := 0
	var cnt int = 0
	fmt.Scan(&cnt)
	for i := 0; i < cnt; i++ {
		var n [3]int
		fmt.Scan(&n[0], &n[1], &n[2])
		ans := n[0] + n[1] + (24 - n[2])
		if ans < min {
			min = ans
		}
		if ans > max {
			max = ans
		}
	}
	fmt.Println(min)
	fmt.Println(max)
}
