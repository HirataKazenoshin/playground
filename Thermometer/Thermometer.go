package main

import (
	"bufio"
	"fmt"
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

func nextFloat() float64 {
	f, _ := strconv.ParseFloat(nextLine(), 64)
	return f
}

func nextFloats() []float64 {
	line := nextLine()
	fields := strings.Fields(line)
	nums := make([]float64, len(fields))
	for i, s := range fields {
		nums[i], _ = strconv.ParseFloat(s, 64)
	}
	return nums
}

func main() {
	X := nextFloat()
	if X >= 38 {
		fmt.Println("1")
	} else if X >= 37.5 {
		fmt.Println("2")
	} else {
		fmt.Println("3")
	}
	return
}
