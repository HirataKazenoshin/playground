package main

import "fmt"

func main() {
  var A, B int
  fmt.Scan(&A, &B)
  if 0 < A && B == 0 {
    fmt.Print("Gold")
  } else if A == 0 && 0 < B {
    fmt.Print("Silver")
  } else {
    fmt.Print("Alloy")
  }
}
