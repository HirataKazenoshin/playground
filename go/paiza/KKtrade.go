package main

import "fmt"

func main() {
	var N, c1, c2, KK, money int
	fmt.Scan(&N, &c1, &c2)
	for i := 1; i < N; i++ {
		var price int
		fmt.Scan(&price)
		if c1 >= price {
			KK++
			money -= price
		} else if c2 <= price {
			money += KK * price
			KK = 0
		}
	}
	var price int
	fmt.Scan(&price)
	money += KK * price
	fmt.Println(money)
}
