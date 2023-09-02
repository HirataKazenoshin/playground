package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	// inputs := strings.Split(scanner.Text(), " ")
	// for _, input := range inputs {
	// 	fmt.Print(input + " ")
	// }
	scanner.Scan()
	fmt.Println(scanner.Text())
}
