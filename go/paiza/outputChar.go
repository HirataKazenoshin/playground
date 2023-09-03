package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	s := bufio.NewScanner(os.Stdin)
	s.Scan()
	text := s.Text()
	var a int
	fmt.Scan(&a)
	// fmt.Print(text)
	// flag := false
	// var b int = a - 1
	// fmt.Println(text[a])
	for _, v := range text {
		// if flag {
		// 	fmt.Println(v)
		// 	break
		// }
		// if i == a {
		// 	flag = true
		// }
		fmt.Println(v)
	}

	// fmt.Printf("%c\n", text[a])

}
