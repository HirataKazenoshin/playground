package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func main() {
	s := bufio.NewScanner(os.Stdin)
	s.Scan()
	inputs := strings.Split(s.Text(), " ")
	for _, input := range inputs {
		fmt.Println(input)
	}
}
