package main

import (
	"bufio"
	"os"
	"strconv"
	"strings"
)

var scanner = bufio.NewScanner(os.Stdin)

func nextLine() string {
	scanner.Scan()
	return scanner.Text()
}

func nextInt() int {
	i, _ := strconv.Atoi(nextLine())
	return i
}

func nextInts() []int {
	line := nextLine()
	fields := strings.Fields(line)
	nums := make([]int, len(fields))
	for i, s := range fields {
		nums[i], _ = strconv.Atoi(s)
	}
	return nums
}

func main() {
	// ここにコードを書く
}
