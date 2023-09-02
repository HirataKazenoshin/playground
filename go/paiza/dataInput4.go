package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Scan()
	toInt, _ := strconv.Atoi(scanner.Text())

	for i := 0; i < toInt; i++ {
		scanner.Scan()
		fmt.Println(scanner.Text())
	}
}
