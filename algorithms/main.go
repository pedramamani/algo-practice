package main

import (
	"fmt"
	"reflect"
)

func test[T any](value T, expectation T) {
	if !reflect.DeepEqual(value, expectation) {
		fmt.Println("\033[31m", value, "!=", expectation, "\033[0m")
	} else {
		fmt.Println("\033[32m", value, "==", expectation, "\033[0m")
	}
}

func main() {
	testQuickSort()
	testBinarySearch()
}