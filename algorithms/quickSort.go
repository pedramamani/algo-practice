// O(nlog(n)) average time, O(1) space
// reflect.DeepEqual allows deep comparison of two any-type values

package main

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

func testQuickSort() {
	test(quickSort([]int{}), []int{})
	test(quickSort([]int{1}), []int{1})
	test(quickSort([]int{2, 1}), []int{1, 2})
	test(quickSort([]int{1, 2, 3}), []int{1, 2, 3})
	test(quickSort([]int{3, 0, -1, 2, 1}), []int{-1, 0, 1, 2, 3})
}
