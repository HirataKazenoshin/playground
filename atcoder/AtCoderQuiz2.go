package main

import "fmt"

func main() {
  var X int
  fmt.Scan(&X)
  if X < 40{
    fmt.Print(40 - X)
  } else if X < 70{
    fmt.Print(70 - X)
  } else if X < 90{
    fmt.Print(90 - X)
  } else {
    fmt.Print("expert")
  }
}
