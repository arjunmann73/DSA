def merge(x, start, mid, end):
    A = [0] * (end-start+1)
    i = start
    j = mid+1
    index = 0
    while i <= mid and j <= end:
        if x[i] <= x[j]:
            A[index] = x[i]
            i += 1
        else:
            A[index] = x[j]
            j += 1
        index += 1
    
    while i <= mid:
        A[index] = x[i]
        i += 1
        index += 1
    
    while j <= end:
        A[index] = x[j]
        j += 1
        index += 1

    index = 0
    for i in range(start, end+1):
        x[i] = A[index]
        index += 1
    
    return


def mergeSort(x, start, end):
    if start < end:
        mid = (start + end)/2
        mergeSort(x, start, mid)
        mergeSort(x, mid+1, end)
        merge(x, start, mid, end)

def main():
    testCaseOne = [5,4,3,2,1]
    testCaseTwo = [1,5,3,6,8,-1]

    mergeSort(testCaseOne, 0, len(testCaseOne)-1)
    mergeSort(testCaseTwo, 0, len(testCaseTwo)-1)

    print("Testcase 1: ", testCaseOne)
    print("Testcase 2: ", testCaseTwo)


if __name__ == "__main__":
    main()
