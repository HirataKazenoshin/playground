package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	s := bufio.NewScanner(os.Stdin)
	for i := 0; i < 10; i++ {
		s.Scan()
		fmt.Print(s.Text())
		if i != 9 {
			fmt.Print(" ")
		}
	}
	fmt.Println()
}
