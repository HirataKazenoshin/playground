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
	if inputs[0] == "1" && inputs[1] == "1" {
		fmt.Println(1)
		return
	}
	fmt.Println(0)

}
