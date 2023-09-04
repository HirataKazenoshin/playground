package main

import (
	"fmt"
)

func main() {
	var cashe, N int
	fmt.Scan(&cashe, &N)
	var points int = 0
	for i := 0; i < N; i++ {
		pay := 0
		fmt.Scan(&pay)
		if points >= pay {
			points -= pay
		} else {
			points += int(float64(pay) * 0.1)
			cashe -= pay
		}
		fmt.Printf("%v %v\n", cashe, points)
	}
}
