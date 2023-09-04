package main

import "fmt"

func main() {
	var N int
	fmt.Scan(&N)
	var cnt int
	for i := 0; i < N; i++ {
		var t string
		var english, math, sience, japanese, rekishi int
		fmt.Scan(&t, &english, &math, &sience, &japanese, &rekishi)
		sum := english + math + sience + japanese + rekishi
		if sum >= 350 {
			if t == "l" && (japanese+rekishi) >= 160 {
				cnt++
			} else if t == "s" && (math+sience) >= 160 {
				cnt++
			}
		}
	}
	fmt.Println(cnt)
}
