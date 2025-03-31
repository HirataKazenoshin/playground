package main

import (
	"bufio"
	"fmt"
	"os"
)

var scanner = bufio.NewScanner(os.Stdin)

func nextLine() string {
	scanner.Scan()
	return scanner.Text()
}

func main() {
	S := nextLine()
	for _, s := range S {
		if string(s) == "." {
			continue
		}
		fmt.Print(string(s))
	}
	fmt.Print("\n")
	return
}
