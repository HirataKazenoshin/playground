package main

import "fmt"

func main() {
	var A, B int
	fmt.Scan(&A, &B)
	cnt := A - B
	answer := 1
	for i := 0;i < cnt; i++{
		answer *= 32
	}
	fmt.Println(answer)
}
