package main

import "fmt"

func main() {
	var X, Y, Z, N int
	fmt.Scan(&X, &Y, &Z)
	fmt.Scan(&N)
	var XTime, YTime, ZTime int
	for i := 0; i < N; i++ {
		var s, t int
		fmt.Scan(&s, &t)
		if s < 9 {
			if t < 9 {
				XTime += t - s
			} else {
				XTime += 9 - s
				if t < 17 {
					YTime += t - 9
				} else {
					YTime += 8
					// ZTime += t - 17
					if t <= 22 {
						ZTime += t - 17
					} else {
						ZTime += 5
						XTime++
					}
				}
			}
		} else if s < 17 {
			if t < 17 {
				YTime += t - s
			} else {
				YTime += 8
				// ZTime += t - 17
				if t <= 22 {
					ZTime += t - 17
				} else {
					ZTime += 5
					XTime++
				}
			}
		} else if s < 22 {
			// ZTime += t - s
			if t < 22 {
				ZTime += t - s
			} else {
				ZTime += t - s
				XTime += t - 22
			}
		} else {
			XTime++
		}
	}
	fmt.Println(XTime)
	fmt.Println(YTime)
	fmt.Println(ZTime)
	fmt.Println(Z*XTime + X*YTime + Y*ZTime)
}
