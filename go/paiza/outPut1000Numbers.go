package main

import "fmt"

func main() {
	for i := 1; i <= 1000; i++ {
		fmt.Print(i)
		if i != 1000 {
			fmt.Print(" ")
		}
	}
}
