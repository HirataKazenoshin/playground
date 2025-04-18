package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Scan()
	scanner.Scan()
	inputs := strings.Split(scanner.Text(), ",")
	for _, input := range inputs {
		fmt.Println(input)
	}
}
