def insertionSort(x):
    if len(x) == 0:
        return
    size = len(x)
    for i in range(1, size):
        for j in range(i, 0, -1):
            if x[j] >= x[j-1]:
                break
            temp = x[j]
            x[j] = x[j-1]
            x[j-1] = temp
    return

def main():
    testCaseOne = [5,4,3,2,1]
    testCaseTwo = [1,5,3,6,8,-1,2]

    insertionSort(testCaseOne)
    insertionSort(testCaseTwo)

    print("Testcase 1: ", testCaseOne)
    print("Testcase 2: ", testCaseTwo)

if __name__ == "__main__":
    main()