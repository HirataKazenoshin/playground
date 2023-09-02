package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	s := bufio.NewScanner(os.Stdin)
	s.Scan()
	fmt.Println(s.Text())
	s.Scan()
	fmt.Println(s.Text())
}
