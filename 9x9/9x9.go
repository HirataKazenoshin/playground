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
	var tmp int
	S := nextLine()
	for index, s := range S {
		if index == 0 {
			tmp = int(s - '0')
		} else if index == 2 {
			fmt.Println(tmp * int(s-'0'))
			return
		}

	}
}
