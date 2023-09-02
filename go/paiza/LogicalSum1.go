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
	flag := false
	for _, v := range inputs {
		if v == "1" {
			flag = true
		}
	}
	if flag {
		fmt.Println(1)
	} else {
		fmt.Println(0)
	}
}
