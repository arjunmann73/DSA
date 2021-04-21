def selectionsort(x):
    if len(x) == 0:
        return
    size = len(x)
    for i in range(size-1):
        minElement = x[i]
        minElementIndex = i
        for j in range(i+1, size):
            if x[j] < minElement:
                minElement = x[j]
                minElementIndex = j
        
        if i == minElementIndex:
            continue
        else:
            temp = x[i]
            x[i] = minElement
            x[minElementIndex] = temp
    return



def main():
    testCaseOne = [5,4,3,2,1]
    testCaseTwo = [2,-2,2,5,1,8,-7]

    selectionsort(testCaseOne)
    selectionsort(testCaseTwo)

    print("Testcase 1: ", testCaseOne)
    print("Testcase 2: ", testCaseTwo)

if __name__ == "__main__":
    main()