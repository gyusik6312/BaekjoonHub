#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* first, const void* second) {

    int a = *(const int*)first;
    int b = *(const int*)second;

    if (a > b)
        return 1;       //오름차순 정렬
    else if (a < b)
        return -1;
    else
        return 0;
}

int binarySearch(int arr[], int n, int key) {       //이진검색 알고리즘
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int removeDuplicates(int arr[], int n) {        //중복 제거 후 배열의 요소 갯수 리턴
    if (n == 0) return 0;

    int j = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j]) {         //
            j++;
            arr[j] = arr[i];
        }
    }

    return j + 1;           //마지막인덱스 번호 + 1이 요소의 갯수이기 때문에 +1을 한 후 리턴
}

int main() {
    int n;
    int* arr;
    int* result;
    int rn;

    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int) * n);
    result = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    memcpy(result, arr, sizeof(int) * n);

    rn = n;

    qsort(arr, n, sizeof(arr[0]), compare);

    n = removeDuplicates(arr, n);       //중복 제거 후 배열의 요소 갯수를 저장

    for (int i = 0; i < rn; i++) {
        int index = binarySearch(arr, n, result[i]);        //이진 검색 사용
        if (index != -1)
            result[i] = index;
    }

    for (int i = 0; i < rn; i++)
        printf("%d ", result[i]);

    free(arr);
    free(result);

    return 0;
}