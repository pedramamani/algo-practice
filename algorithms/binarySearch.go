// O(log(n)) time, O(1) space

package main

func binarySearch(xs []int, x int) int {
	l := 0
	r := len(xs) - 1

	for l <= r {
		m := (l + r) / 2
		if xs[m] < x {
			l = m + 1
		} else if xs[m] > x {
			r = m - 1
		} else {
			return m
		}
	}
	return -1
}

func testBinarySearch() {
	xs := []int{1, 2, 3, 5, 8, 13, 21, 34, 55, 89}
	test(binarySearch(xs, 34), 7)
	test(binarySearch(xs, 20), -1)
	test(binarySearch(xs, 1), 0)
}
