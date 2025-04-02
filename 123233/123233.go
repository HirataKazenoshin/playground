package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
)

var scanner = bufio.NewScanner(os.Stdin)

func nextLine() string {
	scanner.Scan()
	return scanner.Text()
}

func main() {
	N := nextLine()
	runesN := []rune(N)
	sort.Slice(runesN, func(i, j int) bool {
		return runesN[i] < runesN[j]
	})
	stringRunesN := string(runesN)
	if stringRunesN == "122333" {
		fmt.Println("Yes")
	} else {
		fmt.Println("No")
	}
	return
}
