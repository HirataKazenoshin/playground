package main

import "fmt"

func main() {
	var x int
	var p float64
	fmt.Scan(&x, &p)
	p = p * 0.01
	// fmt.Println(p)
	// fmt.Println(x)
	var sum int
	for x > 4 {
		sum += x
		// fmt.Println(float64(x) * p)
		if (float64(x) * p) < 1 {
			break
		}
		x -= int(float64(x) * p)
		// x = int(float64(x) * p)
		// fmt.Println(x)

		// sum += x
		// x -= x * p
		// fmt.Println(x)

	}

	fmt.Println(sum - 1)
	// fmt.Println(float64(x))
}
