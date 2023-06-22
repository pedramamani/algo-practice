// O(nlog(n)) average time, O(1) space
// reflect.DeepEqual allows deep comparison of two any-type values

package main

import (
	"fmt"
	"reflect"
)

func quickSort(xs []int) []int {
    quickSortSub(xs, 0, len(xs)-1)
    return xs
}

func quickSortSub(xs []int, a, b int) {
    if a >= b {
        return
    }
    pivot := xs[b]
    i := a
    for j := a; j < b; j++ {
        if xs[j] < pivot {
            xs[i], xs[j] = xs[j], xs[i]
            i++
        }
    }
    xs[i], xs[b] = xs[b], xs[i]
    quickSortSub(xs, a, i-1)
    quickSortSub(xs, i+1, b)
}


func Test[T any](value T, expectation T) {
	if !reflect.DeepEqual(value, expectation) {
		fmt.Println("\033[31m", value, "!=", expectation, "\033[0m")
	} else {
		fmt.Println("\033[32m", value, "==", expectation, "\033[0m")
	}
}

func main() {
	Test(quickSort([]int{}), []int{})
	Test(quickSort([]int{1}), []int{1})
	Test(quickSort([]int{2, 1}), []int{1, 2})
	Test(quickSort([]int{1, 2, 3}), []int{1, 2, 3})
	Test(quickSort([]int{3, 0, -1, 2, 1}), []int{-1, 0, 1, 2, 3})
}
