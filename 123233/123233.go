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
	var cnt1, cnt2, cnt3 int
	N := nextLine()
	for _, i := range N {
		if i == '1' {
			cnt1 = cnt1 + 1
			if cnt1 == 2 {
				fmt.Println("No")
			}
		} else if i == '2' {
			cnt2 = cnt2 + 1
			if cnt2 == 3 {
				fmt.Println("No")
			}
		} else if i == '3' {
			cnt3 = cnt3 + 1
			if cnt3 == 4 {
				fmt.Println("No")
			}
		} else {
			fmt.Println("No")
			return
		}
	}
	fmt.Println("Yes")
	return
}
